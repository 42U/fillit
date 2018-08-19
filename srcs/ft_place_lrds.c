/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_LRDS.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:21:04 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:02:58 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** place L_R, L_D, S_L
*/

void	ft_place_lrds(char c, int nb, int i, int j)
{
	if (nb == 6)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 2][j + 1] = c;
	}
	else if (nb == 7)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i][j + 2] = c;
		g_square[i + 1][j] = c;
	}
	else if (nb == 8)
	{
		g_square[i][j] = c;
		g_square[i + 1][j] = c;
		g_square[i + 2][j] = c;
		g_square[i + 3][j] = c;
	}
}
