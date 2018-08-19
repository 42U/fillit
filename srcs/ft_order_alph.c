/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_alph.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 07:17:44 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 01:58:43 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_order_alph(int *g_order, int g_inc, int i, int j)
{
	char c;
	c = g_char;
	if (g_order[g_inc] >= 0 && g_order[g_inc] <= 2)
			ft_place_zldr(c, g_order[g_inc], i, j);
	else if (g_order[g_inc] >= 3 && g_order[g_inc] <= 5)
			ft_place_zull(c, g_order[g_inc], i, j);
	else if (g_order[g_inc] >= 6 && g_order[g_inc] <= 8)
			ft_place_lrds(c, g_order[g_inc], i, j);
	else if (g_order[g_inc] >= 9 && g_order[g_inc] <= 11)
			ft_place_flsq(c, g_order[g_inc], i, j);
	else if (g_order[g_inc] >= 12 && g_order[g_inc] <= 14)
			ft_place_trtl(c, g_order[g_inc], i, j);
	else if (g_order[g_inc] >= 15 && g_order[g_inc] <= 17)
			ft_place_jdlr(c, g_order[g_inc], i, j);
	else if (g_order[g_inc] == 18)
			ft_place_ju(c, i, j);
}
