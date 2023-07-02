#include <stdio.h>
#include <string.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "source";
	char dest[] = "desti";
	char *res;
	
    printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
    res = ft_strncpy(dest, src,5);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	/*
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
    res = strncpy(dest, src,5);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);*/
	
	return (0);
}
