/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:19:15 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/22 17:49:16 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//outputs a string to the given fd

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/* int	main(void)
{
	char	test[] = "";
	int		fd = 1;
	ft_putstr_fd(test, fd);
	return (0);
} */
