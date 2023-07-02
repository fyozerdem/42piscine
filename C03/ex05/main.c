
#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
       char s1[20] = "Hello";
        char s2[20] = "world!";
        printf("%s + %s =(8) ", s1,s2);
        ft_strlcat(s1, s2, 8);
        printf("%s",s1);
}
