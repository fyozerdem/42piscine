#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dest,char *src);
int	main()
{
	char src[] = "source";
	char dest[] = "destination";
	char *res;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
    res = ft_strcpy(dest, src);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);

	/*
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
    res = strcpy(dest, src);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	*/
	return (0);
}
