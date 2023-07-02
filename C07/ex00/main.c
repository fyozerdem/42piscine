#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_strdup(char *src);

int	main(void)
{
	char *test;
	char *dup;
	char	*str;
	char	*allocated;
	test = "Hello! ";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
