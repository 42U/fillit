/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_need_rm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 00:38:58 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 17:16:01 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_need_rm(void)
{
	if (g_flag == 0)
	{
		while (g_base * g_base < (g_pcs * 4))
			g_base++;
		ft_create_square(g_base);
	}	
	else if (g_flag > 0)
		ft_create_square(g_base);
}
