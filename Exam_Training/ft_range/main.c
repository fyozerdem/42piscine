int		*ft_range(int start, int end);
#include <stdio.h>
int main()
{
    int        ft_abs(int x)
    {
    if (x < 0)
        return (-x);
    return (x);
    }
    int a = -1;
    int b = 3;
    int *range = ft_range(a, b);
    int len = ft_abs(a - b) + 1;
    printf("With (%d, %d) you will return an array containing ",a,b);

    int i = 0;
    while(i<len)
    {
        printf("%d ",range[i]);
        i++;
    }
    return 0;
}