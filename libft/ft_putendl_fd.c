/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:35:46 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/29 15:40:59 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//same as putstr_fd but with newline

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	test[] = "myNameWAS";
	int		fd = 1;
	ft_putendl_fd(test, fd);
	return (0);
}
*/