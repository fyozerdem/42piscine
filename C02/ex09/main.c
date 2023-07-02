/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:17:01 by fozerdem          #+#    #+#             */
/*   Updated: 2023/06/28 12:19:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str);
int main ()
{
	char str[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s \n \n   |   \n   v \n\n",str);
	printf("%s",ft_strcapitalize(str));

}
