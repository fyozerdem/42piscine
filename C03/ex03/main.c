#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char s1[100] = "Hello, ";
	char s2[] = "world!";
	printf("%s + %s (3) -> ",s1,s2);
	printf("%s",ft_strncat(s1,s2,3));
	//printf("%s",strncat(s1,s2,3));

}
