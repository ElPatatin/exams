#include <unistd.h>

int	main(int argc, char **argv)
{
	size_t	i;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i]);
		while (i-- > 0)
		write(STDOUT_FILENO, &argv[1][i], sizeof(char) * 1);
	}
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}