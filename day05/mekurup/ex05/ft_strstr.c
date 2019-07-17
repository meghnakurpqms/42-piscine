/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:36:20 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/15 17:43:16 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int nextj;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((to_find[j] != '\0') && (str[i + j] == to_find[j]))
		{
			nextj = j + 1;
			if (to_find[nextj] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return ((void*)0);
}
