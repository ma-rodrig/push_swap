/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:58:03 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/13 15:42:36 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//same as strchr but last occ
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((s[i] == (char)c))
			return ((char *)s + i);
		--i;
	}
	return (NULL);
}

/* int	main(void)
{
	char s[] = "tripouille";


	printf("%s\n", ft_strrchr(s, 't' + 256));
	printf("original: %s\n", strrchr(s, 't' + 256));
} */
