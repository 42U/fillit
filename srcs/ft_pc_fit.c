/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pc_fit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 16:59:54 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 02:38:02 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pc_fit(int g_k, int i, int j)
{
//	while (ft_compare(str, g_strs[g_k]) != 0)
//		g_k++;
//	g_order[g_inc] = g_k;
//	btr = g_order[g_inc];
//	nb = g_inc;
	if (g_k >= 0 && g_k <= 10)
		return (ft_which_pc(g_k, i, j));
	else if (g_k >= 11 && g_k <= 18)
		return (ft_which_pc2(g_k, i, j));
	return (0);
}
