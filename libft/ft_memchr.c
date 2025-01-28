/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:56:02 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 17:34:07 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//scans the initial n bytes of mem area pointed by s
//to find the first instance of c
//returns a pointer to the matching byte/ NULL if does not occur
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char s[] = { };
	
	
	char *str = ft_memchr(s, '\0', 1);
	char *test = memchr(s, '\0', 1);

	printf("mine: %s\n", str);

	printf("original: %s\n", test);
	
}  */