
#include <stdio.h>
int ft_iterative_power(int nb, int power);
int main()
{
       printf("2^4 = %d \n", ft_iterative_power(2,4));
       printf("2^0 = %d \n", ft_iterative_power(2,0));
       printf("0^0 = %d \n", ft_iterative_power(0,0));
       printf("2^(-4) = %d ", ft_iterative_power(2,-4));
}
