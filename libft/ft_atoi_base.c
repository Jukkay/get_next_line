/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:06:44 by jylimaul          #+#    #+#             */
/*   Updated: 2021/12/08 13:33:25 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(const char *nbr, unsigned int base)
{
	unsigned long	num;
	int				negpos;

	num = 0;
	negpos = 1;
	while (ft_iswhitespace(*nbr))
		nbr++;
	if ((*nbr == '-' || *nbr == '+') && ft_isalnum(*(nbr + 1)))
	{
		if (*nbr == '-')
			negpos = -1;
		nbr++;
	}
	while (ft_isalnum(*nbr))
	{
		if (ft_base10(*nbr) >= (int)base)
			break ;
		num = num * base + ft_base10(*nbr);
		if (num > 9223372036854775807 && negpos != -1)
			return (-1);
		else if (num > 9223372036854775807 && negpos == -1)
			return (0);
		nbr++;
	}
	return (num * negpos);
}
