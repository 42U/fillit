/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_seven.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:42:20 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:29:03 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define L_D
*/

int		ft_piece_seven(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (j + 2 < g_base && g_square[i][j + 2] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
