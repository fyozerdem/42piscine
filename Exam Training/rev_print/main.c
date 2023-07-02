char *ft_rev_print(char *str);
#include <stdio.h>
int main()
{
	char str[] = "dub0 a POIL";
    printf("%s -> ",str);
	ft_rev_print(str);
    char str1[] = "zaz";
    printf("\n%s -> ",str1);
    ft_rev_print(str1);
    char str2[] = "";
    printf("\n%s -> ",str2);
    ft_rev_print(str2);
    
}