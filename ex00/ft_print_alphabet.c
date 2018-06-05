void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	*str;
	int		i;

	str = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i += 1;
	}
}
