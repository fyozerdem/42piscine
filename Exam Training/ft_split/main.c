
#include <stdio.h>
char	**ft_split(char *str);
int	main(int argc, char **argv)
{
	char	**str = ft_split("	there's like       5 words      here");
	printf("-------------------\n");
	for (int i = 0; i < 5; i++)
		printf("String 0%d: %s\n", i + 1, str[i]);
	return (0);
}