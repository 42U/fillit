/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_flsq.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:28:15 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:00:15 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** place F_L S_Q T_U
*/

void	ft_place_flsq(char c, int nb, int i, int j)
{
	if (nb == 9)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i][j + 2] = c;
		g_square[i][j + 3] = c;
	}
	else if (nb == 10)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
	}
	else if (nb == 11)
	{
		g_square[i][j + 1] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 1][j + 2] = c;
	}
}
