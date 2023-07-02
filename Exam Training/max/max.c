#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	if (len == 0)
		return (0);
	max = tab[0];
	i = 0;
	while (++i < len)
	{
		if (tab[i] > max)
			max = tab[i];
	}
	return (max);
}
/*#include <stdio.h>
int main()
{
    int arr[] = {12, 43, 35, 23, 59, 72, 1, 69};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("max = %d\n", max(arr, len));
    return 0;
}
*/