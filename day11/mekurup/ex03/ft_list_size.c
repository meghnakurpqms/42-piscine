/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:08:19 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 16:09:29 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*node;
	int		count;

	count = 0;
	if (!begin_list)
		return (0);
	node = begin_list;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
