/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:39:33 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 18:39:51 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *node;
	t_list *prev;
	t_list *current;

	prev = NULL;
	current = *begin_list;
	while (current != NULL)
	{
		node = current->next;
		current->next = prev;
		prev = current;
		current = node;
	}
	*begin_list = prev;
}
