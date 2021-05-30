/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:01:54 by marvin            #+#    #+#             */
/*   Updated: 2021/05/30 16:44:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
   long	nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if (nb >= 0 && nb < 10)
        ft_putchar_fd(nb + '0', fd);
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}
