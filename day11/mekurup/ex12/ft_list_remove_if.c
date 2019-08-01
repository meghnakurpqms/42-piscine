/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:21:27 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 22:22:36 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *node;
	t_list *rem;

	node = *begin_list;
	while (node && node->next)
	{
		if ((*cmp)(node->next->data, data_ref) == 0)
		{
			rem = node;
			node->next = node->next->next;
			free(rem);
		}
		node = node->next;
	}
	node = *begin_list;
	while (node && ((*cmp)(node->data, data_ref) == 0))
	{
		rem = node;
		*begin_list = node->next;
		free(rem);
	}
	*begin_list = node;
}
