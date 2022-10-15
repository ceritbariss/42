/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:43:04 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/08 15:56:22 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    unsigned int i;

    i = ft_strlen(s);
    while(i >= 0)
    {
        if(s[i] == (char)c)
            return((char *)s + 1);
        i--;
    }
    return(NULL);
}