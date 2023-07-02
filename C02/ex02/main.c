#include <stdio.h>

int		ft_str_is_alpha(char *str);
int    main()
{
    char *str = "";
	printf("%s -> %d\n",str,ft_str_is_alpha(str));
    str="abcdefghijkl";
    printf("%s -> %d\n",str,ft_str_is_alpha(str));
    str = "abc1234defghijkl";
    printf("%s -> %d\n",str,ft_str_is_alpha(str));
    str = "KUSUFWIHFPQA";
    printf("%s -> %d\n",str,ft_str_is_alpha(str));
}
