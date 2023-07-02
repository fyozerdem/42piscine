/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fozerdem <fozerdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:11:51 by fozerdem          #+#    #+#             */
/*   Updated: 2023/02/24 13:35:29 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_size_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		i++;
	}
	result = result + ft_strlen(sep) * (i - 1);
	return (result + 1);
}

char	*ft_str_append(char *array, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	a = 0;
	while (i < size)
	{
		while (strs[i][j])
			array[a++] = strs[i][j++];
		j = 0;
		while (i + 1 < size && sep[j])
			array[a++] = sep[j++];
		j = 0;
		i++;
	}
	array[a] = '\0';
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	array = (char *)malloc(sizeof(char) * ft_size_malloc(size, strs, sep));
	if (array == NULL)
		return (NULL);
	array = ft_str_append(array, size, strs, sep);
	return (array);
}
