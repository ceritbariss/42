/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:27:49 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/21 14:07:57 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[i] != 0 && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != 0 && j + i < len)
			j++;
		if (j == ft_strlen(s2))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
