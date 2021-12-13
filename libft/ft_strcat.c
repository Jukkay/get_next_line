/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:25:03 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/17 13:44:15 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	s2len;
	size_t	s1index;

	i = 0;
	s2len = ft_strlen(s2);
	s1index = ft_strlen(s1);
	while (i < s2len)
	{
		s1[s1index] = s2[i];
		s1index++;
		i++;
	}
	s1[s1index] = '\0';
	return (s1);
}
