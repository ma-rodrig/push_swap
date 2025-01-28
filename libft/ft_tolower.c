/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:16:36 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/14 16:06:09 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c = 67;

	printf("%i\n", ft_tolower(c));
}
*/