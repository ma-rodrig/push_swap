/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:03:23 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 17:29:27 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//outputs the char 'c' to the given file descriptor
//fd: file descriptor on wich to write. is an integer number that uniquely 
//represents an opened file for the process

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	char	test = 'M';
	int		fd = -5;
	ft_putchar_fd(test, fd);
	//putchar('m');
	return (0);
} */
