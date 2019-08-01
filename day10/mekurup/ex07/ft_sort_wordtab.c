/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:32:40 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/23 18:32:43 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if ((s1[i] - s2[j]) != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

void	ft_sort_wordtab(char **tab)
{
	int		idx;
	int		i;

	i = 0;
	while (tab[i])
	{
		idx = 0;
		while (tab[idx])
		{
			if ((tab[idx + 1] != '\0') && ft_strcmp(tab[idx], tab[idx + 1]) > 0)
				ft_swap(&tab[idx], &tab[idx + 1]);
			idx++;
		}
		i++;
	}
}
