/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_pc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 21:19:40 by issmith           #+#    #+#             */
/*   Updated: 2018/08/05 21:24:39 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_which_pc2(int nb)
{
	if (nb == 11)
		return (ft_piece_elev());
	if (nb == 12)
		return (ft_piece_twel());
	if (nb == 13)
		return (ft_piece_thir());
	if (nb == 14)
		return (ft_piece_fote());
	if (nb == 15)
		return (ft_piece_fift());
	if (nb == 16)
		return (ft_piece_sixt());
	if (nb == 17)
		return (ft_piece_sevt());
	if (nb == 18)
		return (ft_piece_eitt());
	return (0);
}
