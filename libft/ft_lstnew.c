/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:48:34 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/13 17:51:51 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_assing_val(t_list *new, void const *content, size_t content_size)
{
	if (!content)
	{
		new->content = NULL;
		new->content_size = (size_t)0;
	}
	else
	{
		ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = malloc(content_size);
		if (!new->content && content_size)
		{
			free(new->content);
			free(new);
			return (NULL);
		}
	}
	else
	{
		free(new);
		return (NULL);
	}
	ft_assing_val(new, content, content_size);
	return (new);
}
