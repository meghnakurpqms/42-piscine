/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:53:33 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 18:54:12 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *node;

	node = begin_list;
	if (begin_list)
	{
		while (node)
		{
			(*f)(node->data);
			node = node->next;
		}
	}
	else
		return ;
}
