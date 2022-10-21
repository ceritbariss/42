/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:33:31 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/21 15:33:21 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	new_s = (char *)malloc(len + 1);
	if (!s || !new_s)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && i < len)
		new_s[j++] = s[i++];
	new_s[j] = '\0';
	return (new_s);
}
