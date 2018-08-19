/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_nine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:51:59 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 00:36:07 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define F_L
*/

int		ft_piece_nine(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (j + 2 < g_base && g_square[i][j + 2] == '.')
		k++;
	if (j + 3 < g_base && g_square[i][j + 3] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
