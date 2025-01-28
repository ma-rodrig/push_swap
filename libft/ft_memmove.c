/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:33:51 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/15 14:20:55 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies first n bytes from mem area src to mem area dest, may overlap
//bytes in src are 1st copied into temp array and then to dest
//if dst and src equal or null, return dest without performing copy
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*sce;

	sce = (void *)src;
	if (!src && !dest)
		return (dest);
	if (src > dest)
		ft_memcpy(dest, sce, n);
	else
	{
		while (n--)
			((char *)dest)[n] = ((char *)sce)[n];
	}
	return (dest);
}
/*
int	main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
    char s0[] = { 0,  0,  0,  0,  0,  0, 0};
    //char s1[] = "abcdefghim";
    //char d1[] = "nopt";
    int i = 0;
	ft_memmove(s0, s, 7);
	while (s0[i])
	{
		printf("%i\n", s0[i]);
		i++;
	}	
}*/