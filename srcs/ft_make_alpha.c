/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 01:16:42 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 06:52:12 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_make_alpha(char ***arr, char ***tmp, int x)
{
	int		i;
	int		j;

	g_char = 64;
	i = 0;
	arr[0] = (char **)ft_memalloc(x + 1);
	while (i < x)
	{
		g_char++;
		if (g_char == 91)
			g_char += 6;
		j = 0;
		arr[0][i] = (char *)ft_memalloc(ft_strlen(tmp[0][i] + 1));
		while (tmp[0][i][j] != '\0')
		{
			if (tmp[0][i][j] == '#')
				arr[0][i][j] = g_char;
			else
				arr[0][i][j] = tmp[0][i][j];
			j++;
		}
		i++;
	}
}
