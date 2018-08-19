/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_g_strs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 00:22:34 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 06:50:12 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_g_strs(void)
{
	int i;

	i = -1;
	g_strs = (char **)ft_memalloc(19 * 9 + 1);
	while (i++ < 19)
		g_strs[i] = (char *)ft_memalloc(10);
	g_strs[0] = Z_L;
	g_strs[1] = Z_D;
	g_strs[2] = Z_R;
	g_strs[3] = Z_U;
	g_strs[4] = L_L;
	g_strs[5] = L_U;
	g_strs[6] = L_R;
	g_strs[7] = L_D;
	g_strs[8] = S_L;
	g_strs[9] = F_L;
	g_strs[10] = S_Q;
	g_strs[11] = T_U;
	g_strs[12] = T_R;
	g_strs[13] = T_L;
	g_strs[14] = T_D;
	g_strs[15] = J_D;
	g_strs[16] = J_L;
	g_strs[17] = J_R;
	g_strs[18] = J_U;
}
