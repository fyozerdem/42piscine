
#include <stdio.h>
void	ft_sort_int_tab(int	*tab, int size);
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
	int size = 6;
	int tab[6] = {1,9,5,2,7,8};
	arr_print(size,tab);
	ft_sort_int_tab(tab,size);
	arr_print(size,tab);
}
