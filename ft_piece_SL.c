/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_eight.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:50:28 by issmith           #+#    #+#             */
/*   Updated: 2018/08/08 04:14:00 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define S_L
*/

int		ft_piece_eight()
{
	int k;

	k = 0;
	g_i = 0;
	while (g_i < g_base)
	{
		g_j = 0;
		while (g_j < g_base)
		{
			if (g_square[g_i][g_j] == '.')
				k++;
			if (g_square[g_i + 1][g_j] == '.' && g_i + 1 < g_base)
				k++;
			if (g_square[g_i + 2][g_j] == '.' && g_i + 2 < g_base)
				k++;
			if (g_square[g_i + 3][g_j] == '.' && g_i + 3 < g_base)
				k++;
			if (k == 4)
				return (1);
			else
				k = 0;
			g_j++;
		}
		g_i++;
	}
	return (0);
}
