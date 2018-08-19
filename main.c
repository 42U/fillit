#include "libft.h"
#include <time.h>
#include <stdio.h>

int		main(int file_count, char **input)
{
	char	**alph;
	char	*str;
	int		flag;
	int		end;
	int		x;

	x = 0;
	end = 0;
	flag = 0;
	alph = NULL;
	if (file_count != 2)
		ft_error_msg(2);
	if (ft_read_file(input[1], &str) == 0)
	{
		x = ft_pcs(str);
		g_pcs = x;
		alph = ft_init(str, x);
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
