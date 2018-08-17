/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_fote.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:33:54 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 16:52:01 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define T_D
*/

int		ft_piece_fote()
{
	int k;

	k = 0;
	if (g_square[g_i][g_j] == '.')
		k++;
	if (g_square[g_i][g_j + 1] == '.'
			&& g_j + 1 < g_base)
		k++;
	if (g_square[g_i][g_j + 2] == '.' && g_j + 2 < g_base)
		k++;
	if (g_square[g_i + 1][g_j + 1] == '.' &&
			g_i + 1 < g_base && g_j + 1 < g_base)
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
