#include <unistd.h>

static void	ft_write(char s, ssize_t bytes)
{
	while (bytes-- > 0)
		write(STDOUT_FILENO, &s, sizeof(char));
}

int	main(int argc, char **argv)
{
	ssize_t	i;
	ssize_t	bytes;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				bytes = argv[1][i] - 96;
				ft_write(argv[1][i], bytes - 1);		
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				bytes = argv[1][i] - 64;
				ft_write(argv[1][i], bytes - 1);
			}
			write(STDOUT_FILENO, &argv[1][i], sizeof(char) * 1);
		}

	}
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
