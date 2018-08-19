/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_sevt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:40:35 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 00:33:30 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define J_U
*/

int		ft_piece_eitt(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (j + 1 < g_base && i + 1 < g_base &&	g_square[i + 1][j + 1] == '.')
		k++;
	if (j + 2 < g_base && i + 1 < g_base &&	g_square[i + 1][j + 2] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
