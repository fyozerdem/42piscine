#include <unistd.h>
#include <stdio.h>

void	ft_res(char *s, int i, int hm, int count)
{
	int		tm_i;
	char	c;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (hm++ > 0)
				printf(", ");
			c = s[i];
			tm_i = i;
			count = 0;
			while (s[tm_i])
			{
				if (s[tm_i] == c)
				{
					s[tm_i] = ' ';
					count++;
				}
				tm_i++;
			}
			printf("%d%c", count, c);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
				av[1][i] += 32;
			i++;
		}
		ft_res(av[1], 0, 0, 0);
	}
	printf("\n");
	return (0);
}