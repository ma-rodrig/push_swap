/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:03:29 by marodrig          #+#    #+#             */
/*   Updated: 2024/09/23 14:27:32 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (type == 'p')
		return (ft_putptr(va_arg(arg, unsigned long int)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (type == 'u')
		return (ft_putunsigned(va_arg(arg, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(arg, unsigned long int), type));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		p;

	i = 0;
	p = 0;
	va_start(arg, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] != '%')
			p += ft_putchar(str[i]);
		else
		{
			p += ft_type(arg, str[i + 1]);
			i++;
		}
		i++;
	}
	va_end(arg);
	return (p);
}
/*int	main(void)
{
	ft_printf(" %c %c %c ", 0, '1', '2');
	printf("\n");
	printf(" %c %c %c ", 0, '1', '2');
	printf("\n");
	ft_printf("%s\n", "1234");
	printf("%s\n", "1234");
	ft_printf("%i\n", -214748364222000);
	printf("%i\n", -214748364222000);

	char	n = 'b';
	char	*ptr = &n;
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);

	unsigned int num = 20345678901;

	ft_printf();
	printf(;

	//int num = -42;

	ft_printf();
	printf("\n");
	printf();
	printf("\n");
	//ft_printf("%X\n", num);
	//printf("%X\n", num);
}*/

/*
int	main(void)
{
	ft_printf("%d \n", ft_printf("ola%% %"));
	printf("\n");
	printf("%d \n", printf("ola%% %"));
	printf("\n");
 
	int teste = printf("hello world\n");
	printf("imprimiu: %d\n", teste);
	int teste2 = ft_printf("hello world\n");
	ft_printf("imprimiu: %d\n", teste2);
	printf("\n");
	
	int x = 42;
	int x2 = 34;
	void *ptrx2 = &x2;
	void *ptr = &x;

	
	ft_printf("HELLO\n");
	ft_printf("%d \n", ft_printf(""));
	ft_printf("%d \n", ft_printf(NULL));
	ft_printf("CHARACTERS: %c %c\n", 'a', 'b');
	ft_printf("STRINGS: %s %s\n", "Good", "bye");
	ft_printf("DECIMAL: %i %d\n", 42, 123);
	ft_printf ("DECIMALS: %d %d\n", 1977, 650000L);
	ft_printf("POINTER NULO: %p \n", NULL );
	ft_printf("POINTER DE x é: %p\n", ptr);
	ft_printf("POINTER 0: %p %p \n", (void *)0, (void *)0);
	ft_printf ("DECIMAL e HEXADECIMAL: %d %x %X \n", 255, 255, 255);
	ft_printf ("HEXADECIMAL 0: %x %X\n", 0, 0);
	ft_printf ("Unsigned int: %u %u\n",  2147483647, UINT_MAX);
	ft_printf ("Unsigned int: %u \n", UINT_MAX);
	ft_printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A',
		"Mix", ptrx2, 34, 34, 255, 255, UINT_MAX);


	ft_printf("\n");
	
	printf("HELLO\n");
	printf("%d \n", printf(""));
	printf("%d \n", printf(NULL));
	printf("Characters: %c %c\n", 'a', 'b');
	printf("Strings: %s %s\n", "Good", "bye");
	printf("Decimal: %d %d\n", 42, 123);
	printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf("Pointer nulo: %p \n", NULL );
	printf("Pointer de x é: %p\n", ptr);
	printf("Pointer 0: %p %p \n", (void *)0, (void *)0);
	printf ("Decimal e hexadecimal: %d %x %X \n", 255, 255, 255);
	printf (" Hexadecimal 0: %x %X\n", 0, 0);
	printf ("Unsigned int: %u %u\n", 2147483647, UINT_MAX);
	printf ("Unsigned int: %u \n", UINT_MAX);
	printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A', "Mix",
		ptrx2, 34, 34, 255, 255, UINT_MAX);
	return (0);
}*/