/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_jdlr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:38:10 by issmith           #+#    #+#             */
/*   Updated: 2018/08/09 06:46:48 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_place_jdlr(char c, int nb)
{
	if (nb == 15)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i][g_j + 1] = c;
		g_square[g_i][g_j + 2] = c;
		g_square[g_i + 1][g_j + 2] = c;
	}
	else if (nb == 16)
	{
		g_square[g_i][g_j + 1] = c;
		g_square[g_i + 1][g_j + 1] = c;
		g_square[g_i + 2][g_j + 1] = c;
		g_square[g_i + 2][g_j] = c;
	}
	else if (nb == 17)
	{
		g_square[g_i][g_j] = c;
		g_square[g_i][g_j + 1] = c;
		g_square[g_i + 1][g_j] = c;
		g_square[g_i + 2][g_j] = c;
	}
}
