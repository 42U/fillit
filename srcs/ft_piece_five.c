/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:37:11 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 00:26:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define L_U
*/

int		ft_piece_five(int i, int j)
{
	int k;

	k = 0;
	if (j + 2 < g_base && g_square[i][j + 2] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base &&	g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 1 < g_base && j + 2 < g_base &&	g_square[i + 1][j + 2] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
