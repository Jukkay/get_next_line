/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:30:02 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/15 10:18:14 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		if (*haystack == needle[i])
		{
			while (*haystack == needle[i] && *haystack != '\0' && len > 0)
			{
				haystack++;
				i++;
				len--;
				if (needle[i] == '\0')
					return ((char *)(haystack - i));
			}
			haystack -= i;
			len += i;
			i = 0;
		}
		len--;
		haystack++;
	}
	return (NULL);
}
