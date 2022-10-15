/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:59:43 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/15 14:03:19 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_s;
    int i;
    int j;

    if(!s1 || !s2 || !(new_s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
        return (0);
    i = 0;
    while (s1 != '\0')
        new_s[i++] = s1[i++];
    j = 0;
    while (s2 != '\0')
        new_s[i++] = s2[j++];
    new_s[i] = '\0';
    return (new_s);
}