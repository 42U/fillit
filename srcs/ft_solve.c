/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 05:15:27 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 21:26:32 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_solve(int *g_order, int flag)
{
	g_char = 65 + flag;
	if (g_pcs == 0)
		return (1);
	g_i = -1;
	while (++g_i < g_base)
	{
		g_j = -1;
		while (++g_j < g_base)
		{
			if (ft_pc_fit(g_order[flag]))
			{
				ft_order_alph(g_order, flag);
				g_pcs--;
				if (ft_solve(g_order, flag + 1))
					return (1);
				ft_remove_pc();
				g_pcs++;
			}
		}
	}
	return (0);
}
