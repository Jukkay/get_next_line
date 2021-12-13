/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:50:03 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/19 12:56:31 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_int_to_str(unsigned int nb, unsigned int divider, char *s)
{
	if (!divider)
	{
		*s = '\0';
		return ;
	}
	*s = nb / divider + '0';
	ft_int_to_str(nb % divider, divider / 10, s + 1);
}

static void	ft_itoa_negatives(int n, char *s)
{
	unsigned int	nb;

	*s = '-';
	nb = (unsigned int)n * (-1);
	ft_int_to_str(nb, ft_power(10, ft_intlen(nb)) / 10, s + 1);
}

char	*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	divider;

	len = ft_intlen(n);
	if (n == 0)
		return (ft_strsub("0", 0, 1));
	if (n < 0)
	{
		s = (char *)malloc(sizeof(char) * len + 2);
		if (!s)
			return (NULL);
		ft_itoa_negatives(n, s);
	}
	else
	{
		s = (char *)malloc(sizeof(char) * len + 1);
		if (!s)
			return (NULL);
		divider = ft_power(10, len) / 10;
		ft_int_to_str((unsigned int)n, divider, s);
	}
	return (s);
}
