/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 04:51:59 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 09:35:11 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_find_ht(char *str, int *i)
{
	while (str[*i] != '#')
		*i += 1;
}

void	ft_inc_ft(int *j, int *x)
{
	*j += 1;
	*x -= 1;
}

void	ft_next_pc(char *str, int *i, int *k)
{
	while (*k < 4 && *k > 0)
	{
		*i += 1;
		if (str[*i] == '#')
			*k += 1;
		if (*k == 4)
			*i += 1;
	}
}

int		ft_make_tmp(char ***tmp, char *str, int x, int k)
{
	int		i;
	int		j;

	tmp[0] = (char **)malloc(sizeof(char *) * (x + 1));
	i = 0;
	j = 0;
	while (x > 0)
	{
		k = 0;
		ft_find_ht(str, &i);
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
				ft_inc_ft(&j, &x);
		}
		ft_next_pc(str, &i, &k);
	}
	return (0);
}
