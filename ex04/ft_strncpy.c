/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:54:16 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/21 11:03:37 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int counter;

	counter = 0;
	while(src[counter] != src[n])
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}

int main ()
{
	char src[] = "bonsoir";
	char dest[200] = "jaienfinreussi";
	unsigned int n;
	n = 3;
	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}
