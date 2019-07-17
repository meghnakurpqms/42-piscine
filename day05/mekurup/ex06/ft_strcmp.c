/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:30:47 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/15 18:31:24 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int s1ascii;
	int s2ascii;
	int i;
	int j;

	s1ascii = s1[0];
	s2ascii = s2[0];
	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		s1ascii = s1[i];
		s2ascii = s2[j];
		if ((s1ascii - s2ascii) != 0)
			return (s1ascii - s2ascii);
		i++;
		j++;
	}
	return (s1ascii - s2ascii);
}
