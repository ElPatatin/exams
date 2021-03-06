#include <stdio.h>
#include <stdlib.h>

void	ft_pgcd(int i, int j)
{
	int	tmp;

	if (i <= j)
		tmp = i;
	else
		tmp = j;
	while (tmp > 0)
	{
		if (((i % tmp) == 0) && ((j % tmp) == 0))
			break ;
		--tmp;
	}
	printf("%d", tmp);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
