/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:40:56 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/26 12:13:39 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates and returns a new str -> result of concatenation of s1 and s2

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	cat = ft_calloc(len, (sizeof(char)));
	if (!cat)
		return (NULL);
	ft_strlcpy(cat, s1, len);
	ft_strlcat(cat, s2, len);
	return (cat);
}
/*
int	main(void)
{
	char	s1[] = "string";
	char	s2[] = " was joined";
	char	join = ft_strjoin(s1, s2);
		
	printf("%s\n", join);
	free(join);
}
*/