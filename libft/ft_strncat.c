/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:22:54 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/17 13:46:59 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s1index;

	i = 0;
	s1index = ft_strlen(s1);
	while (i < n && s2[i] != '\0')
	{
		s1[s1index] = s2[i];
		s1index++;
		i++;
	}
	s1[s1index] = '\0';
	return (s1);
}
