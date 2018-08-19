/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_thir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:32:20 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 01:07:53 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  define T_L
*/

int		ft_piece_thir(int i, int j)
{
	int k;

	k = 0;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base &&	g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 2 < g_base && j + 1 < g_base &&	g_square[i + 2][j + 1] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
