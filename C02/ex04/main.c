
#include <stdio.h>
int        ft_str_is_lowercase(char *str);
int    main()
{
    char *str = "";
    printf("%s -> %d \n",str, ft_str_is_lowercase(str));
    str = "abcdefghijkl";
    printf("%s -> %d\n",str, ft_str_is_lowercase(str));
    str = "ASDF";
    printf("%s -> %d\n",str, ft_str_is_lowercase(str));
    str="asda123";
    printf("%s -> %d",str, ft_str_is_lowercase(str));
}
