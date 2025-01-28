/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:14:37 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/14 16:06:13 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		c -= 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c = 99;

	printf("%i\n", ft_toupper(c));
}
*/