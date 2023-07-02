/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fozerdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:04:31 by fozerdem          #+#    #+#             */
/*   Updated: 2023/02/09 12:25:35 by fozerdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A'))
			i = 0;
		else if ((str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
		{
			i++;
		}
		c++;
	}
	return (str);
}
