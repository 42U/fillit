/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_JL.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:46:01 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:30:54 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define J_L
*/

int		ft_piece_sixt(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j + 1] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 2 < g_base && g_square[i + 2][j] == '.')
		k++;
	if (i + 3 < g_base && g_square[i + 2][j + 1] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
