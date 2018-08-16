#include "libft.h"
#include <time.h>
#include <stdio.h>

int		main(int file_count, char **input)
{
    clock_t start, tend;
    start = clock();													// FTO
    double cpu_time_used;
	char	**alph;
	char	*str;
	int		x;
	int		flag;
	int		end;

	end = 0;
	flag = 0;
	x = 0;
	alph = NULL;
	if (file_count != 2)
	{
		ft_putstr("\tusage:\t'./a.out $filename'\tthis program must read from one file!\n");
		return (0);
	}
	if (ft_read_file(input[1], &str) == 0)
	{
		x = ft_pcs(str);
		g_pcs = x;
		alph = ft_init(&str, x);
		if (alph != NULL)
			fillit(alph, flag);
	}
	else
		ft_error_msg(1);
	free(g_strs);
	free(g_square);
	free(alph);
    tend = clock();                                                     // FTO     
    cpu_time_used = ((double) (tend - start)) / CLOCKS_PER_SEC;        // FTO
	printf("%s%f%s", "\n the program ran in: ", cpu_time_used, " seconds\n\n");                                      // For Testing Only
	return (0);
}
