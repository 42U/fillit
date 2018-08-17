/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_fift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:35:37 by issmith           #+#    #+#             */
/*   Updated: 2018/08/17 00:11:29 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define J_D
*/

int		ft_piece_fift()
{
	int k;

	k = 0;
	if (g_square[g_i][g_j] == '.')
		k++;
	if (g_j + 1 < g_base && g_square[g_i][g_j + 1] == '.')
		k++;
	if (g_j + 2 < g_base && g_square[g_i][g_j + 2] == '.')
		k++;
	if (g_j + 2 < g_base && g_i + 1 < g_base &&
			g_square[g_i + 1][g_j + 2] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
