/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:15:39 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/21 19:17:02 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strupcase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ( str[count] >= 97 && str[count] <= 122)
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}

int main()
{
	char str[] = "Bonjour je suis la";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
