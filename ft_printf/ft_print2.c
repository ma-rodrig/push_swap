/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:31:13 by marodrig          #+#    #+#             */
/*   Updated: 2024/08/29 14:38:41 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int num) //type u ***CHECKED***
{
	int	c;

	c = 0;
	if (num >= 10)
		c += ft_putunsigned(num / 10);
	c += ft_putchar(num % 10 + '0');
	return (c);
}

int	ft_puthex(unsigned long h, const char type) //type x and X
{
	int		i;
	int		j;
	char	*hexdigits;
	char	buffer[17];

	if (type == 'X')
		hexdigits = "0123456789ABCDEF";
	else
		hexdigits = "0123456789abcdef";
	i = 0;
	j = 0;
	if (h == 0)
		j += ft_putchar('0');
	else
	{
		while (h != 0)
		{
			buffer[i++] = hexdigits[h % 16];
			h /= 16;
		}
		while (i > 0)
			j += ft_putchar(buffer[--i]);
	}
	return (j);
}
