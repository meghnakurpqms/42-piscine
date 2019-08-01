/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:07:30 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/24 17:08:42 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*node1;
	t_list	*node2;

	i = 0;
	if (ac < 0)
		return (NULL);
	node1 = NULL;
	while (i < ac)
	{
		node2 = ft_create_elem(av[i]);
		node2->next = node1;
		node1 = node2;
		i++;
	}
	return (node1);
}
