
#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int main()
{
	char src[] = "Hello World!";
	char dest[] = "W";
	printf("%d | %s", ft_strlcpy(dest, src,3), dest);
}
