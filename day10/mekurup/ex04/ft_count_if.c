/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:17:41 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/23 15:17:53 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
