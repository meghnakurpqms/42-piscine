/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:44:32 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 17:45:11 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*node;
	unsigned int	i;

	i = 0;
	if (!begin_list)
		return (NULL);
	node = begin_list;
	while (node)
	{
		if (i == nbr)
			break ;
		node = node->next;
		i++;
	}
	return (node);
}
