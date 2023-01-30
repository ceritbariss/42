/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:48:13 by bcerit            #+#    #+#             */
/*   Updated: 2023/01/30 14:59:31 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <stdio.h>
//#include <fcntl.h>

static char	*left_str(char *line, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[i] != '\0' && line[i] != c)
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc((ft_strlen(line) - i));
	if (!str)
		return (NULL);
	i++;
	while (line[i] != '\0')
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

static char	*new_line(char *line, char c)
{
	char	*str;
	int		i;

	i = 0;
	if (!line[i])
		return (NULL);
	while (line[i] != '\0' && line[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (line[i] != '\0' && line[i] != c)
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == c)
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*read_line(int fd, char *line)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	i = 1;
	while (!ft_strchr(line, '\n') && i != 0)
	{
		i = read(fd, tmp, BUFFER_SIZE);
		if (i == -1)
		{
			free(tmp);
			return (NULL);
		}
		tmp[i] = '\0';
		line = ft_strjoin(line, tmp);
	}
	free(tmp);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = read_line(fd, line);
	if (line)
	{
		str = new_line(line, '\n');
		line = left_str(line, '\n');
		return (str);
	}
	return (NULL);
}

/*
#include <stdio.h>
 int        main()
 {
     char *line;
     char *line1;
     char *line2;
     int fd1 = open("a.txt",O_RDONLY);
     line = get_next_line(fd1);
     line1 = get_next_line(fd1);
     line2 = get_next_line(fd1);
    printf("%s",line);
    printf("%s",line1);
    printf("%s",line2);
    close(fd1);
 }
*/