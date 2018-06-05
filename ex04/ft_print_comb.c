void	ft_putchar (char c);

void	ft_space(int U, int D, int C)
{
		ft_putchar(C + 48);
		ft_putchar(D + 48);
		ft_putchar(U + 48);
}

void	ft_print_comb(void)
{
	int U;
	int D;
	int C;

	C = 0;
	while (C <= 7)
	{
		D = C + 1;
		while (D <= 8)
		{
			U = D + 1;
			while (U <= 9)
			{
				ft_space(C, D, U);
				while (C != 7 && D != 8 && U != U)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				U++;
			}
			D++;
		}
		C++;
	}
}
