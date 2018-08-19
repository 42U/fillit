/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_alph.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 07:17:44 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:22:10 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_order_alph(int *g_order, int flag, int i, int j)
{
	char c;

	c = 65 + flag;
	if (g_order[flag] >= 0 && g_order[flag] <= 2)
		ft_place_zldr(c, g_order[flag], i, j);
	else if (g_order[flag] >= 3 && g_order[flag] <= 5)
		ft_place_zull(c, g_order[flag], i, j);
	else if (g_order[flag] >= 6 && g_order[flag] <= 8)
		ft_place_lrds(c, g_order[flag], i, j);
	else if (g_order[flag] >= 9 && g_order[flag] <= 11)
		ft_place_flsq(c, g_order[flag], i, j);
	else if (g_order[flag] >= 12 && g_order[flag] <= 14)
		ft_place_trtl(c, g_order[flag], i, j);
	else if (g_order[flag] >= 15 && g_order[flag] <= 17)
		ft_place_jdlr(c, g_order[flag], i, j);
	else if (g_order[flag] == 18)
		ft_place_ju(c, i, j);
}
