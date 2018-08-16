/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_ZLDR.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:13:06 by issmith           #+#    #+#             */
/*   Updated: 2018/08/09 13:57:54 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
** place Z_L, Z_D, Z_R
*/

void	ft_place_zldr(char c, int nb)
{
	if (nb == 0)
	{
		g_square[g_i][g_j + 1] = c;
		g_square[g_i][g_j + 2] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 1][g_j + 1] = c;
	}
	else if (nb == 1)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 2][g_j + 1] = c;
	}
	else if (nb == 2)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i][g_j + 1] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 1][g_j + 2] = c;
	}
}
