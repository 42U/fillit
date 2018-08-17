/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:32:27 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 16:47:26 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define Z_U
*/

int		ft_piece_three()
{
	int k;

	k = 0;
	if (g_square[g_i][g_j + 1] == '.' && g_j + 1 < g_base)
		k++;
	if (g_square[g_i + 1][g_j] == '.' && g_i + 1 < g_base)
		k++;
	if (g_square[g_i + 1][g_j + 1] == '.' &&
			g_i + 1 < g_base && g_j + 1 < g_base)
		k++;
	if (g_square[g_i + 2][g_j] == '.' && g_i + 2 < g_base)
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
