/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_elev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:26:57 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:25:32 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define T_U
*/

int		ft_piece_elev(int i, int j)
{
	int k;

	k = 0;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base && g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 1 < g_base && j + 2 < g_base && g_square[i + 1][j + 2] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
