/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:44:25 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/20 17:20:17 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//outputs the intenger to the given fd

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

/* int	main(void)
{
	//int	test = 0;
	//int	fd = 1;
	ft_putnbr_fd(-987441, 2);
	return (0);
} */