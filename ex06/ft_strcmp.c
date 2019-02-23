/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:40:15 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/22 14:38:35 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		i++;
	}
	return (s1[i]-s2[i]);
}

int main()
{
	char s1[] = "jesuisl";
	char s2[] = "jesuisz";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
