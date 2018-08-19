/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_fift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:35:37 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:43:43 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** define J_D
*/

int		ft_piece_fift(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (j + 1 < g_base && g_square[i][j + 1] == '.')
		k++;
	if (j + 2 < g_base && g_square[i][j + 2] == '.')
		k++;
	if (j + 2 < g_base && i + 1 < g_base && g_square[i + 1][j + 2] == '.')
		k++;
	if (k == 4)
		return (1);
	else
		return (0);
}
