/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 05:15:27 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 04:04:33 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_solve(int *g_order, int flag, int pcs)
{
	int i;
	int j;

	g_char = 65 + flag;
	if (!pcs)
		return (1);
	i = -1;
	while (++i < g_base)
	{
		j = -1;
		while (++j < g_base)
		{
			if (ft_pc_fit(g_order[flag], i, j))
			{
				ft_order_alph(g_order, flag, i, j);
				ft_print_arr();
				ft_putchar('\n');
				if (ft_solve(g_order, flag + 1, pcs - 1))
					return (1);
				ft_remove_pc();
				pcs++;
			}
		}
	}
	return (0);
}
