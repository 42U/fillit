/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_jdlr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:38:10 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:03:21 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_place_jdlr(char c, int nb, int i, int j)
{
	if (nb == 15)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i][j + 2] = c;
		g_square[i + 1][j + 2] = c;
	}
	else if (nb == 16)
	{
		g_square[i][j + 1] = c;
		g_square[i + 1][j + 1] = c;
		g_square[i + 2][j + 1] = c;
		g_square[i + 2][j] = c;
	}
	else if (nb == 17)
	{
		g_square[i][j] = c;
		g_square[i][j + 1] = c;
		g_square[i + 1][j] = c;
		g_square[i + 2][j] = c;
	}
}
