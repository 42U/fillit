/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:29:47 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 00:18:25 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define Z_R
*/

int		ft_piece_two(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base &&
			g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 1 < g_base && j + 2 < g_base &&
			g_square[i + 1][j + 2] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
