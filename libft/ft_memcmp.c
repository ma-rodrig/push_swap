/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:02:35 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/21 18:13:06 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compares first n bytes of mem areas s1 and s2
//returns an intenger less than, equal to, or greater than zero
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char s1[] = "SyAsTv";
	char s2[] = "Ox02T84rE";
	size_t size = -52;

	printf("%d\n", ft_memcmp(s1, s2, size));
	printf("%d\n", memcmp(s1, s2, size));
} */