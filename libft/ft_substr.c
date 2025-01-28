/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:06:12 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/22 17:02:58 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates and returns a substring(portion) from s, return NULL if alloc fails
//begins at index 'start' and is of max size 'len'

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	sub = (char *)malloc((sizeof(char)) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[start] && (i < len))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

/* int	main(void)
{
	
	char *str = ft_substr(NULL, 5, 5);

	printf("%s\n", str);
	free(str);
}  */