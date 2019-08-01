#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int 	i;
	int		j;
	int  	pos;
	char 	*chrs;

	chrs = (char*)malloc(sizeof(*chrs) * (argc));
	i = 1;
	pos = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			chrs[pos] = argv[i][j];
			pos++;
			j++;
		}
		if (i + 1 < argc)
		{
			chrs[pos] = '\n';
		}
		i++;
		pos++;
	}
	return (chrs);
}