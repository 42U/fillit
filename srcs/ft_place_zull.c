/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_ZULL.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:13:30 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:06:39 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** place Z_U, L_L, L_U
*/

void	ft_place_zull(char c, int nb, int i, int j)
{
	if (nb == 3)
	{
		g_square[i][j + 1] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 2][j] = c;
	}
	else if (nb == 4)
	{
		g_square[i][j] = c;
		g_square[i + 1][j] = c;
		g_square[i + 2][j] = c;
		g_square[i + 2][j + 1] = c;
	}
	else if (nb == 5)
	{
		g_square[i][j + 2] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 1][j + 2] = c;
	}
}
