/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_nine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:51:59 by issmith           #+#    #+#             */
/*   Updated: 2018/08/14 00:37:54 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define F_L
*/

int		ft_piece_nine()
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
			if (g_square[g_i][g_j + 1] == '.' && g_j + 1 < g_base)
				k++;
			if (g_square[g_i][g_j + 2] == '.' && g_j + 2 < g_base)
				k++;
			if (g_square[g_i][g_j + 3] == '.' && g_j + 3 < g_base)
				k++;
			if (k == 4)
			{
				// need to put the linked.list.xy here
				return (1);
			}
			else
				k = 0;
			g_j++;
		}
		g_i++;
	}
	return (0);
}
