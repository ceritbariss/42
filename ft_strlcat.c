/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:56:55 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/21 13:59:30 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;
	size_t	size_src;

	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	j = ft_strlen(dst);
	if (size_dst >= size)
		return (size_src + size);
	i = 0;
	while (src[i] != '\0' && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (size_dst + size_src);
}
