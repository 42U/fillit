/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_trtl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:33:33 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:04:25 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** place T_R, T_L, T_D
*/

void	ft_place_trtl(char c, int nb, int i, int j)
{
	if (nb == 12)
	{
		g_square[i][j] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 2][j] = c;
	}
	else if (nb == 13)
	{
		g_square[i][j + 1] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 2][j + 1] = c;
	}
	else if (nb == 14)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i][j + 2] = c;
		g_square[i + 1][j + 1] = c;
	}
}
