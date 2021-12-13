/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_chunks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:51:13 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/18 16:11:57 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_chunks(char const *s, char c)
{
	int		size;
	int		len;

	size = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
		{
			s++;
		}
		len = ft_find_next_end(s, c);
		if (len)
		{
			size++;
			s += len;
		}
		else
		{
			if (*s != '\0')
				s++;
		}
	}
	return (size);
}
