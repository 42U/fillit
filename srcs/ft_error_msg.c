/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 01:04:00 by issmith           #+#    #+#             */
/*   Updated: 2018/08/01 02:48:40 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error_msg(int nb)
{
	if (nb == 1)
		ft_putstr("error\n");
	if (nb == 2)
		ft_putstr("another error\n");
	if (nb == 3)
		ft_putstr("this error right here \n");
}
