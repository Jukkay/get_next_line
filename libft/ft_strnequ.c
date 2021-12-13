/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:15:32 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/15 10:45:02 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		diff;
	size_t	i;

	if (!n)
		return (1);
	if (!s1 || !s2)
		return (0);
	i = 0;
	diff = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	diff = s1[i] - s2[i];
	if (diff != 0)
		return (0);
	else
		return (1);
}
