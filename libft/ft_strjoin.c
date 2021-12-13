/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:53:02 by jylimaul          #+#    #+#             */
/*   Updated: 2021/12/08 13:33:56 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	int		i;
	int		i2;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s1[i] != '\0' && s1)
		str[i2++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && s2)
		str[i2++] = s2[i++];
	str[i2] = '\0';
	return (str);
}
