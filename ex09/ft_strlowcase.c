/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:01:00 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/21 19:13:10 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >=65 && str[count] <= 90)
			str[count] = str[count] + 32;
		count++;
	}
	return (str);
}

int main()
{
	char str[] = "JESAISPASsiCESTOK";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
