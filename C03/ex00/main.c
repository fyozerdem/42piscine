
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2);
int main()
{
	  char str1[] = "Hello";
  	  char str2[] = "Helo";
	  char str3[] = "world!";
	  char str4[] = "world!";
	  printf("%s - %s -> %d \n",str1,str2, ft_strcmp(str1,str2));
	  printf("%s - %s -> %d \n",str2,str3, ft_strcmp(str2,str3));
	  printf("%s - %s -> %d \n",str3,str1, ft_strcmp(str3,str1));
	  printf("%s - %s -> %d",str4,str3, ft_strcmp(str4,str3));
}
