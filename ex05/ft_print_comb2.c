void	ft_putchar (char c);

void	ft_print_nb(int nb)
{
	int		U;
	int		D;

	D = nb / 10;
	U = nb % 10;
	if (nb <= 9)
	{
		ft_putchar('0');
		ft_putchar(U + 48);
	}
	else
	{
		ft_putchar(D + 48);
		ft_putchar(U + 48);
	}
}

void	ft_print_final(int nb1, int nb2)
{
	if (nb1 == 98 && nb2 == 99)
	{
		ft_print_nb(nb1);
		ft_putchar(' ');
		ft_print_nb(nb2);
	}
	else
	{
	ft_print_nb(nb1);
	ft_putchar(' ');
	ft_print_nb(nb2);
	ft_putchar(',');
	ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;

	nb1 = 0;
	while (nb1 <= 99)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_print_final(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}
