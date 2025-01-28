/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:21:58 by marodrig          #+#    #+#             */
/*   Updated: 2024/09/23 14:30:08 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c) //type c and %  ***CHECKED***
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str) // type s ***CHECKED***
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
		i += ft_putchar(str[i]);
	return (i);
}

int	ft_putptr(unsigned long ptr) // type p void *pointer ***CHECKED***
{
	int		i;
	int		j;
	char	*hexdigits;
	char	buffer[17];

	i = 0;
	j = 0;
	hexdigits = "0123456789abcdef";
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	else
	{
		j += ft_putstr("0x");
		while (ptr != 0)
		{
			buffer[i++] = hexdigits[ptr % 16];
			ptr /= 16;
		}
		while (i > 0)
			j += ft_putchar(buffer[--i]);
	}
	return (j);
}

int	ft_putnbr(int nbr) //type d and i ***CHECKED***
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr > 9)
			ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	return (0);
}
