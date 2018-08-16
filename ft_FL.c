/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_FL.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 03:27:45 by issmith           #+#    #+#             */
/*   Updated: 2018/07/30 08:55:18 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_FL(char *str, int i)
{
	if (str[i + 1] == '#')
	{
		if (str[i + 2] == '#')
		{
			if (str[i + 3] == '#')
				return (F_L);
			if (str[i + 5] == '#')
				return (L_D);
			if (str[i + 6] == '#')
				return (T_D);
			if (str[i + 7] == '#')
				return (J_D);
		}
		if (str[i + 4] == '#')
			if (str[i + 5] == '#')
				return (Z_L);
		if (str[i + 5] == '#')
		{
			if (str[i + 6] == '#')
				return (S_Q);
			if (str[i + 10] == '#')
				return (J_R);
		}
	}
	return (NULL);
}
