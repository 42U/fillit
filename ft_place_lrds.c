/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_LRDS.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:21:04 by issmith           #+#    #+#             */
/*   Updated: 2018/08/09 06:31:39 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** place L_R, L_D, S_L
*/

void	ft_place_lrds(char c, int nb)
{
	if (nb == 6)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i][g_j + 1] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 2][g_j + 1] = c;
	}
	else if (nb == 7)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i][g_j + 1] = c;
		g_square[g_i][g_j + 2] = c;
		g_square[g_i + 1][g_j] = c;
	}
	else if (nb == 8)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 2][g_j] = c;
		g_square[g_i + 3][g_j] = c;
	}
}
