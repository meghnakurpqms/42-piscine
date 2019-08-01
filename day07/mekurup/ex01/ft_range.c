/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:31:10 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/17 20:31:24 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	arr = (int *)malloc(sizeof(int*) * (max - min + 1));
	if (!arr)
	{
		return (NULL);
	}
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
