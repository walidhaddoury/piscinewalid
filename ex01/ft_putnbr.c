/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 17:49:21 by whaddour          #+#    #+#             */
/*   Updated: 2019/02/20 12:40:05 by whaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar(2 + '0');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb = nb * -1);
    }
    else
    {
        if (nb >= 10)
            ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
}

int        main()
{
    ft_putnbr(0);
    return (0);
}
