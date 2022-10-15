/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:25:40 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/07 20:00:26 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *new_dst;
    const char *new_src;

    new_dst = dst;
    new_src = src;

    size_t i;

    if(!dst && !src)
        return(0);

    i = 0;
    while(i < n)
    {
        new_dst[i] = new_src[i];
        i++;
    }
    return (dst);
}