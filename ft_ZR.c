/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ZR.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 03:45:21 by issmith           #+#    #+#             */
/*   Updated: 2018/07/30 08:55:52 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ZR(char *str, int i)
{
	if (str[i + 1] == '#')
	{
		if (str[i + 6] == '#')
		{
			if (str[i + 7] == '#')
				return (Z_R);
			if (str[i + 11] == '#')
				return (L_R);
		}
	}
	if (str[i + 3] == '#')
		if (str[i + 4] == '#')
			if (str[i + 5] == '#')
				return (L_U);
	if (str[i + 4] == '#')
		if (str[i + 5] == '#')
		{
			if (str[i + 6] == '#')
				return (T_U);
			if (str[i + 9] == '#')
				return (Z_U);
			if (str[i + 10] == '#')
				return (T_L);
		}
	return (NULL);
}
