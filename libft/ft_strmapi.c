/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:07:19 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/29 15:02:36 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//applies function f to each char os str. a new str is created and returned

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_f(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_toupper(c));
    else
        return (ft_tolower(c));
}

int main(void)
{
	char *result = ft_strmapi("Hello, World!", ft_f);
	printf("%s\n", result);
	free(result);
}
*/