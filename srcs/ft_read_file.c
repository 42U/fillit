/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 22:25:45 by issmith           #+#    #+#             */
/*   Updated: 2018/08/15 01:29:00 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_read_file(char *input, char **str)
{
	int		fd;
	char	buf[1];
	int		i;
	
	i = 0;
	fd = open(input, O_RDONLY, S_IRUSR);
	str[0] = (char *)ft_memalloc(i + 1); 
	if (fd < 0)
		return (-3);
	while (read(fd, buf, 1) != 0)
	{
		if (buf[0] == 0)
			return (-2);
		if (buf[0] != '.' && buf[0] != '#' && buf[0] != '\n')
			return (-1);
		if (buf[0] == '.' || buf[0] == '#' || buf[0] == '\n')
		{
			str[0][i] = (char)ft_memalloc(1); 
			str[0][i] = buf[0];
			i++;
		}
	}
	str[0][i] = (char)ft_memalloc(1);
	str[0][i] = '\0';
	close(fd);
	return (0);
}
