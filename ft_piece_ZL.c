/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:54:37 by issmith           #+#    #+#             */
/*   Updated: 2018/08/08 04:27:55 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define Z_L
*/

int		ft_piece_zero()
{
	int k;

	k = 0;
	g_i = 0;
	while (g_i < g_base)
	{
		g_j = 0;
		while (g_j < g_base)
		{
			if (g_square[g_i][g_j + 1] == '.' && g_j + 1 < g_base)
				k++;
			if (g_square[g_i][g_j + 2] == '.' && g_j + 2 < g_base)
				k++;
			if (g_square[g_i + 1][g_j] == '.' && g_i + 1 < g_base)
				k++;
			if (g_square[g_i + 1][g_j + 1] == '.' &&
					g_i + 1 < g_base && g_j + 1 < g_base)
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
