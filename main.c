/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 15:29:33 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 15:29:36 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int file_count, char **input)
{
	char	**alph;
	char	*str;
	int		flag;
	int		end;

	end = 0;
	flag = 0;
	alph = NULL;
	if (file_count != 2)
		ft_error_msg(2);
	if (ft_read_file(input[1], &str) == 0)
	{
		g_pcs = ft_pcs(str);
		alph = ft_init(str, g_pcs);
		if (alph != NULL)
		{
			ft_convert(alph);
			fillit(g_order, flag);
		}
	}
	else
		ft_error_msg(1);
	free(g_strs);
	free(g_square);
	return (0);
}
