/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:11:59 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/12 16:36:12 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *low;

	char *high;

	char temp;

	low = str;
	high = str;
	temp = '';
	while (*high != '\0')
	{
		high++;
	}
	high--;
	while (low <= high)
	{
		temp = *low;
		*low = *high;
		*high = temp;
		low++;
		high--;
	}
	return (str);
}
