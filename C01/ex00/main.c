#include <stdio.h>

void	ft_ft(int *nbr);

int 	main()
{
    int *nbr;
    int b;
    b = 3;
    nbr = &b;
    ft_ft(nbr);
	printf("%d",b);
}
