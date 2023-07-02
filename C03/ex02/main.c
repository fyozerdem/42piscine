
#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src);
int	main()
{
	char s1[100] = "Hello, ";
	char s2[] = "world!";
	printf("%s +  %s = ",s1,s2);
	printf("%s",ft_strcat(s1,s2));
	//printf("%s",strcat(s1,s2));
}
