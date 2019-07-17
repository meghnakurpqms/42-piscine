/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:10:30 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/16 14:36:28 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				getjcount(char *src, unsigned int j)
{
	while (src[j] != '\0')
		j++;
	return (j);
}

int				geticount(char *dest, unsigned int i, unsigned int sizecopy)
{
	while ((dest[i] != '\0') && (sizecopy != 0))
	{
		i++;
		sizecopy--;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int sizecopy;
	unsigned int leftspace;

	i = 0;
	j = 0;
	sizecopy = size;
	i = geticount(dest, i, sizecopy);
	j = getjcount(src, j);
	leftspace = size - j;
	if (leftspace == 0)
		return (i + j);
	j = 0;
	while ((src[j] != '\0'))
	{
		if (leftspace != 1)
		{
			dest[i + j] = src[j];
			leftspace--;
		}
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
