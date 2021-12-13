/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:22:57 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/22 10:43:51 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp;

	if (!alst)
		return ;
	while (*alst != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		temp = (*alst)->next;
		free(*alst);
		*alst = temp;
	}
	*alst = NULL;
}
