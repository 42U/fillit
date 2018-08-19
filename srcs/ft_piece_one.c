/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:22:41 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:27:41 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  define Z_D
*/

int		ft_piece_one(int i, int j)
{
	int k;

	k = 0;
	if (g_square[i][j] == '.')
		k++;
	if (i + 1 < g_base && g_square[i + 1][j] == '.')
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
