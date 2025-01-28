/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:27:39 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/17 14:52:10 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i])
		i++;
	while (src[res])
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] && (i + 1 < size))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}

/* int main(void)
{
	char dest[] = "destino";
	char src[] = "source";
	unsigned int size = 5;
	char tdest[] = "destino";
	char tsrc[] = "source";
	unsigned int tsize = 5; 
	
	//size_t original = strlcat(tdest, tsrc, tsize);
	size_t mine = ft_strlcat(dest, src, size);


	printf("%zu\n", mine);
	//printf("%zu\n", original);
	printf("%s\n", dest);
	//printf("%s\n", tdest);
} */