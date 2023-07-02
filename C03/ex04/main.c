
#include <stdio.h>
#include <string.h>
char    *ft_strstr(char *str, char *to_find);
int main()
{
    char s1[] = "Hello";
   char s2[] = "Hello";
   char s3[] = "World!";
   char s4[] = "Wo";
    printf("%s - %s -> %s = %s\n",s1,s2, ft_strstr(s1,s2),strstr(s1,s2));
    printf("%s - %s -> %s = %s\n",s2,s3, ft_strstr(s2,s3),strstr(s2,s3));
    printf("%s - %s -> %s = %s",s3,s4, ft_strstr(s3,s4),strstr(s3,s4));
}