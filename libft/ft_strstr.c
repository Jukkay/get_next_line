/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:46:22 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/11 13:23:04 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		if (*haystack == needle[i])
		{
			while (*haystack == needle[i] && *haystack != '\0')
			{
				haystack++;
				i++;
				if (needle[i] == '\0')
					return ((char *)(haystack - i));
			}
			haystack -= i;
			i = 0;
		}
		haystack++;
	}
	return (NULL);
}
