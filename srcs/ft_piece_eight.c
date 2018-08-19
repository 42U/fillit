/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_eight.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:50:28 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 00:32:28 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define S_L
*/

int		ft_piece_eight(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (i + 2 < g_base && g_square[i + 2][j] == '.')
		k++;
	if (i + 3 < g_base && g_square[i + 3][j] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
