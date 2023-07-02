/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fozerdem <fozerdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:35:05 by fozerdem          #+#    #+#             */
/*   Updated: 2023/02/24 13:32:49 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	temp;

	temp = min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{	
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (max - temp);
}
