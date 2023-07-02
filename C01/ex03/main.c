#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 20;
	int b = 6;
	int *div = &a;
	int *mod = &b;
	ft_div_mod(a,b,div,mod);
	printf("div -> %d , mod -> %d",*div ,*mod);
}
