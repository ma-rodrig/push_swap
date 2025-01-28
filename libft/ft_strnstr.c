/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:09:30 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/17 15:18:55 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of '\0' little in big
//not more then len chars are searched
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && !little)
		return (NULL);
	if (little[0] == '\0' || little == big)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && ((i + j) < len))
		{
			if (!big[i + j] && !little[j])
				return ((char *)&big[i]);
			j++;
		}
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char big[50] = "aaabcabcd";
	char little[50] = "aabc";
	size_t size = 5;

	printf("%s\n", ft_strnstr(big, little, size));
	//printf("%d\n", strnstr(big, little, size));
} */
