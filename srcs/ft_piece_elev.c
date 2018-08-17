/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_elev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:26:57 by issmith           #+#    #+#             */
/*   Updated: 2018/08/17 00:10:00 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define T_U
*/

int		ft_piece_elev()
{
	int k;

	k = 0;
	if (g_j + 1 < g_base && g_square[g_i][g_j + 1] == '.')
		k++;
	if (g_i + 1 < g_base && g_square[g_i + 1][g_j] == '.')
		k++;
	if (g_i + 1 < g_base && g_j + 1 < g_base &&
			g_square[g_i + 1][g_j + 1] == '.')
		k++;
	if (g_i + 1 < g_base && g_j + 2 < g_base &&
			g_square[g_i + 1][g_j + 2] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
