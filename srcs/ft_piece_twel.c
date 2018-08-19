/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_twel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:29:55 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:31:57 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define T_R
*/

int		ft_piece_twel(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base && g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 2 < g_base && g_square[i + 2][j] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
