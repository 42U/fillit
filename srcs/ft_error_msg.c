/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 01:04:00 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 08:45:15 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error_msg(int nb)
{
	if (nb == 1)
		write(1, "error\n", 7);
	if (nb == 2)
	{
		write(1, "\tusage:\t'./fillit $filename'", 29);
		write(1, "\tthis program must read from one file!\n", 40);
	}
	exit(0);
}
