/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:53:40 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/20 14:25:31 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		negative(int count, int neg, char *str)
{
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '+')
			neg = 2;
		else if (str[count] == '-')
			neg = 1;
	}
	return (neg);
}

int		ft_atoi(char *str)
{
	int count;
	int result;
	int neg;

	neg = 0;
	count = 0;
	result = 0;
	while (str[count] == '\f' || str[count] == '\t' || str[count] == '\n' ||
			str[count] == '\r' || str[count] == '\v' || str[count] == ' ')
		count++;
	neg = negative(count, neg, str);
	if (neg == 1 || neg == 2)
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10 + str[count] - '0';
		count++;
	}
	if (neg == 1)
		return (result * -1);
	return (result);
}
