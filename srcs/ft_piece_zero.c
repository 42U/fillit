/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:54:37 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 00:16:33 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define Z_L
*/

int		ft_piece_zero(int i, int j)
{
	int k;

	k = 0;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (j + 2 < g_base && g_square[i][j + 2] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base &&
			g_square[i + 1][j + 1] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
