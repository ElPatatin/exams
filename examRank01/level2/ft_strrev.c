int	ft_strlen(char *s)
{
	size_t	i;

	i = -1;
	while (s[++i]);
	return (i);
}

char 	*ft_strrev(char *s)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = -1;
	len = ft_strlen(s);
	tmp = 0;
	while (--len > ++i)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
	return (s);
}
