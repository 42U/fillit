/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:32:27 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 00:19:20 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define Z_U
*/

int		ft_piece_three(int i, int j)
{
	int k;

	k = 0;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base &&
			g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 2 < g_base && g_square[i + 2][j] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
