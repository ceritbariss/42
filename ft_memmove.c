/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:17:31 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/08 10:32:04 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *dst_new;
    const char *src_new;
    size_t i;

    dst_new = dst;
    src_new = src;

    i = 0;
    while(n > i)
    {
        dst_new[i] = src_new[i];
        i++;
    }
    return(dst);
}

int main()
{
    char s1[10] = "baris";
    char s2[10] = "xk";
    printf("%s", ft_memmove(s1, s2, 1));
}