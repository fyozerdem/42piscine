#include <stdio.h>

void	ft_swap(int	*a, int *b);

int main()
{
	int i;
    i = 2;
    int *a = &i;
	int j;
	j = 3;
    int *b = &j;
	
    printf("i -> %d , j -> %d \n",i ,j);
	ft_swap(a,b);
	printf("i -> %d , j -> %d",i ,j); 		
}
