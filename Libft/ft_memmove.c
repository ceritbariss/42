/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:17:31 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/21 13:56:25 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

/*
** int main()
** {
**    char s1[10] = "baris";
**    char s2[10] = "xk";
**    printf("%s", ft_memmove(s1, s2, 1));
**}
*/