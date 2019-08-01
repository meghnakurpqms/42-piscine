/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:30:19 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 21:30:33 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *node;

	if (!begin_list1 || !(*begin_list1))
		*begin_list1 = begin_list2;
	else
	{
		node = *begin_list1;
		while (node->next)
			node = node->next;
		node->next = begin_list2;
	}
}
