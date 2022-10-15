/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:13:31 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/15 19:22:13 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
#include <fcntl.h>
#include <stdio.h>
int main()
{
    int fd = open("deneme.txt", 1);
    ft_putchar_fd('a', fd);
    printf("%d", fd);
}