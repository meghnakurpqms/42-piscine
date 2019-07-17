/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:08:59 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/13 22:51:45 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i >= 46340)
			return (0);
		i++;
	}
	return (i - 1);
}

int		ft_is_prime(int nb)
{
	int	i;
	int flag;

	flag = 0;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		flag = 1;
		return (0);
	}
	i = 5;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
		{
			flag = 1;
			return (0);
		}
		i = i + 2;
	}
	if (flag == 0)
		return (1);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb) == 1)
		{
			break ;
		}
		nb++;
	}
	return (nb);
}
