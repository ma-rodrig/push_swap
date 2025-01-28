/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:45:16 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/17 14:32:43 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns a pointer to the 1st occurrence of the character c int the string s
//returns NULL if not found, '/0' 

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}
/*
int	main(void)
{
	char s[] = "tripouille";


	printf("%s\n", ft_strchr(s, 'i'));
	printf("original: %s\n", strchr(s, 'i'));
}*/
