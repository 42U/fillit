/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_thir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:32:20 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 16:50:45 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  define T_L
*/

int		ft_piece_thir()
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
	if (g_square[g_i + 2][g_j + 1] == '.' &&
			g_i + 2 < g_base && g_j + 1 < g_base)
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
