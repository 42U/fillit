/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_JL.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:46:01 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 17:08:28 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define J_L
*/

int		ft_piece_sixt()
{
	int k;

	k = 0;
	if (g_square[g_i][g_j + 1] == '.')
		k++;
	if (g_square[g_i + 1][g_j + 1] == '.' && g_i + 1 < g_base)
		k++;
	if (g_square[g_i + 2][g_j] == '.' && g_i + 2 < g_base)
		k++;
	if (g_square[g_i + 2][g_j +1] == '.' && g_i + 3 < g_base)
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
