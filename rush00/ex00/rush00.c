/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifavi <ifavi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:40:13 by ifavi             #+#    #+#             */
/*   Updated: 2019/07/14 13:28:26 by ifavi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	int		i;
	char	*variants;
	int		character_idx;
	int		vb;
	int		hb;

	i = 0;
	variants = " -|o";
	while (i < x * y)
	{
		character_idx = 0;
		vb = (i / x == 0 || i / x == y - 1);
		hb = (i % x == 0 || i % x == x - 1);
		if (vb)
			character_idx += 1;
		if (hb)
			character_idx += 2;
		ft_putchar(variants[character_idx]);
		if (i % x == x - 1)
			ft_putchar('\n');
		i++;
	}
}
