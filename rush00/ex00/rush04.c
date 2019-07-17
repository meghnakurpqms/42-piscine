/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifavi <ifavi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:40:56 by ifavi             #+#    #+#             */
/*   Updated: 2019/07/14 12:34:08 by ifavi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	int i;
	int ch;
	int w;
	int h;

	w = x - 1;
	h = y - 1;
	i = 0;
	while (i < x * y)
	{
		ch = ' ';
		if (i / x == 0 || i / x == h || i % x == 0 || i % x == w)
			ch = 'B';
		if (i == 0 || i == x * y - 1)
			ch = 'A';
		if ((i == w || i == x * y - x) && i != 0)
			ch = 'C';
		ft_putchar(ch);
		if (i % x == w)
			ft_putchar('\n');
		i++;
	}
}
