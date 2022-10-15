/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:29:09 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/08 15:03:43 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0' || c == '\0')
    {
        if(s[i] == (unsigned char) (c))
            return((char *)s + i);
        i++;
    }
    return(NULL);
}