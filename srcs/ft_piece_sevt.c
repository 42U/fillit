/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_sixt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:38:30 by issmith           #+#    #+#             */
/*   Updated: 2018/08/17 00:14:32 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define J_R
*/

int		ft_piece_sevt()
{
	int k;

	k = 0;
	if (g_square[g_i][g_j] == '.')
		k++;
	if (g_j + 1 < g_base && g_square[g_i][g_j + 1] == '.')
		k++;
	if (g_i + 1 < g_base && g_square[g_i + 1][g_j] == '.')
		k++;
	if (g_i + 2 < g_base && g_square[g_i + 2][g_j] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
