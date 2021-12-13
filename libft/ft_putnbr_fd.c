/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:07:18 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/19 11:14:12 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	int_to_char(unsigned int nb, unsigned int divider, int fd)
{
	unsigned int	temp;

	if (!divider)
		return ;
	temp = nb / divider;
	ft_putchar_fd(temp + '0', fd);
	int_to_char(nb % divider, divider / 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = (unsigned int)(n * (-1));
		ft_putchar_fd('-', fd);
		if (nb < 10)
			ft_putchar_fd(nb + '0', fd);
		else
			int_to_char(nb, ft_power(10, ft_intlen(nb)) / 10, fd);
	}
	else if (n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
	{
		nb = (unsigned int)(n);
		int_to_char(n, ft_power(10, ft_intlen(nb)) / 10, fd);
	}
}
