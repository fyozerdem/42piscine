#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int i = 10;
	int j = 5;
	int *a = &i;
	int *b = &j;
	
	printf("i -> %d ,j -> %d\n",i,j);
	ft_ultimate_div_mod(a,b);
	printf("i -> %d ,j -> %d", i,j);	
}
