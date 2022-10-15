/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:57:36 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/15 12:02:07 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *s2;

    if(!(s2 == (char *)malloc(ft_strlen(s1) + 1)))
        return (0);
    ft_memcpy(s2, s1, ft_strlen(s1) + 1);
    return (s2);
}