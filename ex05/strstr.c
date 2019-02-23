/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:56:49 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/21 14:56:51 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
	int counter1;
	int counter2;

	counter1 = 0;
	if (str[counter1] != '\0')
	{
		while(str[counter1] != '\0')
		{
			counter2 = 0;
			while (str[counter1 + counter2] == to_find[counter2])
			{
				counter2++;
				if (to_find[counter2] == '\0')
					return (str + counter1);
			}
			counter1++;
		}
	}
	return (0);
}

int main ()
{
	char str[] = "bababacccbaabcjesuabcisla";
	char to_find[] = "cc";
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
