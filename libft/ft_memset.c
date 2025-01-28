/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:49:02 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/14 15:01:06 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fills the 1st n bytes of mem pointed by s w/ const byte c
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* #include <string.h>

int	main(void)
{
	char s[] = "";
	char s1[] = "";

	ft_memset(s + 5, '0', 1);
	memset(s1 + 5, '0', 1);
	
	printf("%s\n", s);
	printf("%s\n", s1);
	
} */
