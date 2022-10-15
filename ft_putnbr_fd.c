/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcerit <bcerit@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:31:03 by bcerit            #+#    #+#             */
/*   Updated: 2022/10/15 20:40:04 by bcerit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    else if (n < 0)
    {
        n = -n;
        write(fd, "-", 1);
        ft_putnbr_fd(n, fd);
    }
    else
    {
        if (n > 9)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + 48, fd);
    }
}