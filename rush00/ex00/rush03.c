/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifavi <ifavi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:40:56 by ifavi             #+#    #+#             */
/*   Updated: 2019/07/14 13:21:30 by ifavi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	int i;
	int ch;

	i = 0;
	while (i < x * y)
	{
		ch = ' ';
		if (i / x == 0 || i / x == y - 1 || i % x == 0 || i % x == x - 1)
			ch = 'B';
		if (i == 0 || i == x * y - x)
			ch = 'A';
		if (x > 1 && (i == x - 1 || i == x * y - 1))
			ch = 'C';
		ft_putchar(ch);
		if (i % x == x - 1)
			ft_putchar('\n');
		i++;
	}
}