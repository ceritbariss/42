/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:12:50 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/16 20:30:42 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    if (!(new = (t_list *)malloc(sizeof(t_list))))
        return (0);
    new->content = content;
    new->next = NULL;
    return (new);
}
/*
#include <stdio.h>
int main()
{
    char *content = "baris";
    t_list *new;
    new = ft_lstnew((char *)content);
    
    printf("%s", new->content);
}
*/