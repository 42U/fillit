/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 04:51:59 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 17:25:22 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_make_tmp(char ***tmp, char *str, int x)
{
	int		i;
	int		j;
	int		k;

	tmp[0] = (char **)malloc(sizeof(char *) * (x + 1));
	i = 0;
	j = 0;
	while (x > 0)
	{
		k = 0;
		while (str[i] != '#')
			i++;
		if (str[i] == '#' && x > 0)
		{
			k++;
			tmp[0][j] = (char *)malloc(sizeof(char) * (10));
			tmp[0][j] = ft_what_one(str, i);
			tmp[0][j] == NULL ? tmp[0][j] = ft_what_three(str, i) : tmp[0][j];
			tmp[0][j] == NULL ? tmp[0][j] = ft_what_two(str, i) : tmp[0][j];
			if (tmp[0][j] == NULL)
				return (-1);
			else
			{
				j++;
				x--;
			}
		}
		while (k < 4 && k > 0)
		{
			i++;
			if (str[i] == '#')
				k++;
			if (k == 4)
				i++;
		}
	}
	return (0);
}
