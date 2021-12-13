/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:36:49 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/19 11:35:24 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_process_str(char **arr, char const *s, char c)
{
	char	*str;
	int		len;

	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		len = ft_find_next_end(s, c);
		if (len)
		{	
			str = ft_strsub(s, 0, len);
			if (!str)
				return ;
			*arr = str;
			arr++;
			s += len;
		}
		else
		{
			if (*s != '\0')
				s++;
		}
	}
	*arr = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;

	if (!s || !c)
		return (0);
	arr = (char **)malloc((ft_count_chunks(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (0);
	ft_process_str(arr, s, c);
	return (arr);
}
