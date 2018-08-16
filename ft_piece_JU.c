/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_sevt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:40:35 by issmith           #+#    #+#             */
/*   Updated: 2018/08/08 17:39:13 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define J_U
*/

int		ft_piece_eitt()
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
			if (g_square[g_i + 1][g_j + 1] == '.' &&
					g_j + 1 && g_i + 1 < g_base)
				k++;
			if ((g_square[g_i + 1][g_j + 2] == '.') && g_j + 2 < g_base 
					&& g_i + 1 < g_base)
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
