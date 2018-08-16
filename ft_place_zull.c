/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_ZULL.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:13:30 by issmith           #+#    #+#             */
/*   Updated: 2018/08/09 06:20:23 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** place Z_U, L_L, L_U
*/

void	ft_place_zull(char c, int nb)
{
	if (nb == 3)
	{
		g_square[g_i][g_j + 1] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 2][g_j] = c;
	}
	else if (nb == 4)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 2][g_j] = c;
		g_square[g_i + 2][g_j + 1] = c;
	}
	else if (nb == 5)
	{
		g_square[g_i][g_j + 2] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 1][g_j + 2] = c;
	}
}
