/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:08:06 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/23 16:08:14 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
