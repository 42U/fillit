/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 20:42:29 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 03:22:20 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_convert(char **alph)
{
	int i;
	t_piece piece;

	i = 0;
	while (alph[i])
	{
		g_k = 0;
		while (ft_compare(alph[i], g_strs[g_k]) != 0)
			g_k++;
		g_order[i] = g_k;
		i++;
	}
	piece.tets = g_order;
	free(alph);
}
