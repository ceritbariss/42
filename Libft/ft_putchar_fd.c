/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:13:31 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/21 15:40:15 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
** #include <fcntl.h>
** #include <stdio.h>
** int main()
** {
**    int fd = open("text.txt", O_WRONLY);
**    ft_putchar_fd('c', fd);
**    printf("%d", fd);
** }
*/