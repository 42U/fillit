/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_JU.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 03:54:50 by issmith           #+#    #+#             */
/*   Updated: 2018/07/30 08:55:36 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_JU(char *str, int i)
{
	if (str[i + 5] == '#')
	{
		if (str[i + 6] == '#')
		{
			if (str[i + 7] == '#')
				return (J_U);
			if (str[i + 10] == '#')
				return (T_R);
			if (str[i + 11] == '#')
				return (Z_D);
		}
		if (str[i + 9] == '#')
			if (str[i + 10] == '#')
				return (J_L);
		if (str[i + 10] == '#')
		{
			if (str[i + 11] == '#')
				return (L_L);
			if (str[i + 15] == '#')
				return (S_L);
		}
	}
	return (NULL);
}
