#include <unistd.h>

void	ft_print_union(char *s1, char *s2)
{
	int	ascii[126] = { 0 };
	int	c;

	while (*s1)
	{
		c = *s1;
		if (ascii[c] == 0)
		{
			write(STDOUT_FILENO, s1, sizeof(char));
			ascii[c] = 1;
		}
		s1++;
	}
	while (*s2)
	{
		c = *s2;
		if (ascii[c] == 0)
		{
			write(STDOUT_FILENO, s2, sizeof(char));
			ascii[c] = 1;
		}
		s2++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_print_union(argv[1], argv[2]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
