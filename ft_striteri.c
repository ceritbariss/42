/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:20:37 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/21 15:39:50 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* 
** void my_func(unsigned int i, char *str)
** {
**	printf("address is point: index = %d and the string is %s\n", i, str);
** }
**
** int main()
** {
**	  char str[] = "samet";
**    ft_striteri(str, my_func);
**    return 0;
** } 
*/