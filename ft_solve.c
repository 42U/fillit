/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 05:15:27 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 13:39:39 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_solve(char **alph, int flag)
{
	int i;
	int j;

	g_char = 65 + flag;
	j = -1;
	if (g_pcs == 0)
		return (1);
	while (alph[flag])
	{
		if (ft_pc_fit(alph[flag]))
		{
			ft_order_alph(g_order, flag);
			flag++;
			g_pcs--;
			if (ft_solve(alph, flag))
				return (1);
		//	ft_who_first(alph[g_si]);
		}
		ft_remove_pc(--flag);
		g_pcs++;
	}
	return (0);
}
