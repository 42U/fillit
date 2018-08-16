/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pc_fit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 16:59:54 by issmith           #+#    #+#             */
/*   Updated: 2018/08/15 03:06:46 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pc_fit(char *str)
{
	g_k = 0;
	while (ft_compare(str, g_strs[g_k]) != 0)
		g_k++;
	g_order[g_inc] = g_k - 1;
	if (g_k >= 0 && g_k <= 10)
		return (ft_which_pc(g_k));
	else if (g_k >= 11 && g_k <= 18)
		return (ft_which_pc2(g_k));
	return (0);
}
