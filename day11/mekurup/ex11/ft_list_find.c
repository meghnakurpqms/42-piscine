/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:41:13 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 19:41:15 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *node;

	node = begin_list;
	if (node)
	{
		while (node)
		{
			if ((*cmp)(node->data, data_ref) == 0)
				return (node);
			node = node->next;
		}
	}
	else
		return (NULL);
	return (NULL);
}
