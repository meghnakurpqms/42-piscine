/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:16:53 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/21 17:16:59 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if ((*s1 == '\0') && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	return (0);
}