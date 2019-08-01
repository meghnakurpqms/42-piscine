/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:09:22 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/28 18:14:13 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*fileinp(void)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];
	char	*s;

	s = (char*)malloc(sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '\0';
	while ((ret = read(0, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		s = ft_strcat(s, buff);
		s = ft_strcat(s, "\0");
	}
	return (s);
}

int		main(void)
{
	char *str;

	str = fileinp();
	compare(str);
	return (0);
}
