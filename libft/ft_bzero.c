/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:43:56 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/15 12:53:31 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//erases the data in the n bytes of mem starting at local pointed by s
//by writing zeros (bytes containing '\0') to that area
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* 
int	main(void)
{
	char s[] = "testee";
	size_t n = 4;
	size_t i = 0;

	ft_bzero(s, n);
	while (i < n)
	{
		printf("%c\n", s[i]);
		i++;
	}
	i = 0;
	memset(s, 0, n);
		while (i < n)
	{
		printf("original: %c\n", s[i]);
		i++;
	}
} */
