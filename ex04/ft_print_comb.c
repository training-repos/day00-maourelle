#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_print_CDU(int C, int D, int U)
{
	if (C == 7 && D == 8 && U == 9)
	{
		ft_putchar(C + 48);
		ft_putchar(D + 48);
		ft_putchar(U + 48);
	}
	else
	{
	ft_putchar(C + 48);
	ft_putchar(D + 48);
	ft_putchar(U + 48);
	ft_putchar(',');
	ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int		U;
	int		D;
	int		C;

	C = 0;
	while (C <= 9)
	{
		D = C + 1;
		while (D <= 9)
		{
			U = D + 1;
			while (U <= 9)
			{
				ft_print_CDU(C, D, U);
				U++;
			}
			D++;
		}
		C++;
	}
}
