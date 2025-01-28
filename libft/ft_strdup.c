/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:27:47 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/17 14:38:33 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns a pointer to a new string which is a duplicate of s

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	else
		ft_strcpy(dest, s);
	return (dest);
}
/* 
int	main(void)
{
	const char *src = "hello";
	char *result = ft_strdup(src); 

	char *original = strdup(src);

	if (result)
	{
		printf("%s\n", result);
		free (result);
	} 
	if (original)
	{
		printf("%s\n", original);
		free (original);
	}
	return (0);
}  */