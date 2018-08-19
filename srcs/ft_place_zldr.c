/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_ZLDR.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:13:06 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:05:29 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
** place Z_L, Z_D, Z_R
*/

void	ft_place_zldr(char c, int nb, int i, int j)
{
	if (nb == 0)
	{
		g_square[i][j + 1] = c;
		g_square[i][j + 2] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
	}
	else if (nb == 1)
	{
		g_square[i][j] = c;
		g_square[i + 1][j] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 2][j + 1] = c;
	}
	else if (nb == 2)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 1][j + 2] = c;
	}
}
