/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:21:20 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/21 16:30:00 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return(0);
}

int main()
{
	unsigned int n = 3;
	char s1[] = "bonjour";
	char s2[] = "bonjoir";
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
		
