#include <stdio.h>
void    ft_rev_int_tab(int *tab, int size);
void arr_print(int size,int *str)
{
	int i = 0;
	while(i<size)
	{
		printf("%d ",str[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	int	size = 5;
	int tab[5] = {0,2,4,6,8};
	arr_print(size,tab);
	ft_rev_int_tab(tab, size);
	arr_print(size,tab);
}
