#include <unistd.h>

void	ft_putstr(char	*str)
{
	ssize_t	i;

	i = -1;
	while (str[++i])
		write(STDOUT_FILENO, &str[i], sizeof(char));
}
