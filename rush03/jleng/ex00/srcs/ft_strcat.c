/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:57:17 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/28 18:03:56 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*ft_strcat(char *s1, char *s2)
{
	char	*ret;
	int		l1;
	int		l2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	ret = (char*)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!ret)
		return (NULL);
	while (i < l1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (j < l2)
	{
		ret[i + j] = s2[j];
		j++;
	}
	ret[i + j] = '\0';
	return (ret);
}
