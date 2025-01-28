/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:12:16 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 17:29:10 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates mem with malloc and initializes the allocated mem block to all zeros

//if calls malloc for nmemb * size bytes, if malloc fails Return NULL

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*call;

	if (size > 0 && (nmemb > SIZE_MAX / size))
		return (NULL);
	call = malloc(nmemb * size);
	if (!call)
		return (NULL);
	ft_memset(call, 0, (nmemb * size));
	return (call);
}
/*  int	main(void)
{
	size_t nmemb = 10;
	size_t size = 5;

	int *call = ft_calloc(nmemb, size);
	int *callo = calloc(nmemb, size);
 
	printf("mine: %i\n", call[0]);
	printf("original: %i\n", callo[0]);
	free (call);
	free (callo);
}  */