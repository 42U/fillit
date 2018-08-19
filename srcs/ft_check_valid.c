/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 06:20:18 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 06:47:02 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_small_help(char *str, int *i, int *c, int *hash)
{
	while ((str[*i] == '.' || str[*i] == '#') && str[*i] != '\n')
	{
		*c += 1;
		if (str[*i] == '#')
			*hash += 1;
		*i += 1;
	}
}

static int		ft_medium_help(char *str, int *i, int *hash, int *line)
{
	if (str[*i + 1] == '\n' && str[*i + 2] != '.' && str[*i + 2] != '#')
		return (-1);
	if (str[*i + 1] != '\n' && str[*i + 1] != '.' && str[*i + 1]
			!= '#' && str[*i + 1] != '\0')
		return (-1);
	if (str[*i + 1] == '\0' && *line != 4)
		return (-1);
	if (*line == 4 && *hash != 4)
		return (-6);
	if (*line > 4)
		return (-1);
	return (1);
}

static int		ft_large_help(char *str, int *i, int *hash, int *line)
{
	if (str[*i + 1] == '\n')
	{
		if (*hash != 4)
			return (-1);
		*hash = 0;
		*line = 0;
		*i += 1;
	}
	return (1);
}

int				ft_check_valid(char *str, int line, int hash)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		ft_small_help(str, &i, &c, &hash);
		if (str[i] == '\n')
		{
			line++;
			if (c != 4)
				return (-2);
			if (ft_medium_help(str, &i, &hash, &line) == -1)
				return (-1);
			if (ft_large_help(str, &i, &hash, &line) == -1)
				return (-1);
			c = 0;
		}
		i++;
	}
	return (0);
}
