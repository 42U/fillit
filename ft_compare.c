/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 21:01:14 by issmith           #+#    #+#             */
/*   Updated: 2018/08/08 00:58:30 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_compare(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!(s1 || s2))
		return (-1);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s2[i] == '#' && (s1[i] >= 65 && s2[i] <= 90)) || s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
