#include <stdio.h>
void	ft_putnbr_base(int nbr, char *base);
int		main(void)
{
	ft_putnbr_base(42, "01");
	printf("\n");
	ft_putnbr_base(12345, "\tponeyvif");
	printf("\n");
	ft_putnbr_base(12345, "poneyvif");
	printf("\n");
	ft_putnbr_base(123456,"0123456789ABCDEF");
}
