/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:30:57 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/17 14:41:24 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//applies f function on each char of str passing its index as 1st arg.
//each char is passed by address f to be modefied if necessary, no return val
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s++);
		i++;
	}
}
/*
void	ft_f(unsigned int i, char *c)
{
    *c = ft_toupper(*c);
}

int main(void)
{
	char result[] = "Hello, World!";
	ft_striteri(result, ft_f);
	printf("%s\n", result);
}
*/