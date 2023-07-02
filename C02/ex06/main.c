#include <stdio.h>
int        ft_str_is_printable(char *str);
int    main()
{
    char *str ="\t";
    printf("%s -> %d\n",str, ft_str_is_printable(str));
    str = "";
    printf("%s -> %d\n",str, ft_str_is_printable(str));
    str = "836asjdka";
    printf("%s -> %d\n",str, ft_str_is_printable(str));
}
