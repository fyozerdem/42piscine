#include <stdlib.h>

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	wordcount(char *str)
{
	int	i = 0;
	int	count = 0;

	while (str[i])
	{
		while (str[i] && is_whitespace(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_whitespace(str[i]))
			i++;
	}
	return (count);
}

char	*ft_strcpy(char *src, char *dst, int n)
{
	int i = -1;

	while (++i < n && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (src);
}

char	**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		wc = wordcount(str);
	char	**array = malloc(sizeof(char *) * (wc + 1));

	while (str[i])
	{
		while (str[i] && is_whitespace(str[i]))
			i++;
		j = i;
		while (str[i] && !is_whitespace(str[i]))
			i++;
		if (i > j)
		{
			array[k] = malloc(sizeof(char *) * ((i - j) + 1));
			ft_strcpy(&str[j], array[k++], i - j);
		}
	}
	array[k] = NULL;
	return (array);
}