/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_trtl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:33:33 by issmith           #+#    #+#             */
/*   Updated: 2018/08/09 13:55:17 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** place T_R, T_L, T_D
*/

void	ft_place_trtl(char c, int nb)
{
	if (nb == 12)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 2][g_j] = c;
	}
	else if (nb == 13)
	{
		g_square[g_i][g_j + 1] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 2][g_j + 1] = c;
	}
	else if (nb == 14)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i][g_j + 1] = c;
		g_square[g_i][g_j + 2] = c;
		g_square[g_i + 1][g_j + 1] = c;
	}
}
