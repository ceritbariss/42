/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:15:45 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/08 12:24:09 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0'; 
    }
    return(ft_strlen(src));
}