/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:40:30 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:29:53 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define L_R
*/

int		ft_piece_six(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (i + 1 < g_base && j + 1 < g_base && g_square[i + 1][j + 1] == '.')
		k++;
	if (i + 2 < g_base && j + 1 < g_base && g_square[i + 2][j + 1] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
