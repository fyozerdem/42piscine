#include <stdio.h>
#include <string.h> 
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main ()
{
	  char str1[] = "Hello";
  	  char str2[] = "Hela";
	  char str3[] = "world!";
	  char str4[] = "world!";
	  printf("%s - %s - 2 -> %d  = %d\n",str1,str2, ft_strncmp(str1,str2,2),strncmp(str1,str2,2));
	  printf("%s - %s - 5 -> %d  = %d\n",str1,str2, ft_strncmp(str1,str2,5),strncmp(str1,str2,5));
	  printf("%s - %s -> %d = %d\n",str2,str3, ft_strncmp(str2,str3,2),strncmp(str2,str3,2));
	  printf("%s - %s -> %d = %d \n",str4,str3, ft_strncmp(str4,str3,5),strncmp(str4,str3,5));
	  printf("%s - %s - 5 -> %d = %d \n",str1,str2, strncmp(str1,str2,5),strncmp(str1,str2,5));
}
