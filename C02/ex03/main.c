
#include <stdio.h>
int        ft_str_is_numeric(char *str);
int    main()
{
    char *str = "";
    printf("%s -> %d\n",str,ft_str_is_numeric(str));
    str = "abc1defghijkl";
    printf("%s -> %d\n",str,ft_str_is_numeric(str));
    str="021941632";
    printf("%s -> %d\n",str,ft_str_is_numeric(str));
}