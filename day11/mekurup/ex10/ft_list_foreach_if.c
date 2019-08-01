/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:26:12 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 19:26:43 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)(void *, void *))
{
	t_list *node;

	node = begin_list;
	if (begin_list)
	{
		while (node)
		{
			if ((*cmp)(node->data, data_ref) == 0)
				(*f)(node->data);
			node = node->next;
		}
	}
	else
		return ;
}
