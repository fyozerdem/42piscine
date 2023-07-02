
#include <stdio.h>
int        ft_str_is_uppercase(char *str);
int    main()
{
    char *str = "";
    printf("%s ->  %d\n",str, ft_str_is_uppercase(str));
    str =  "asdfghjk";
    printf("%s ->  %d\n",str, ft_str_is_uppercase(str));
    str="AJDA";
    printf("%s ->  %d\n",str, ft_str_is_uppercase(str));
    str= "ASDF12";
     printf("%s ->  %d\n",str, ft_str_is_uppercase(str));
}
