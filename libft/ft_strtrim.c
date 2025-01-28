/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:05:36 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/22 17:03:40 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates and returns a copy of s1 with the chars(whitespaces) specified
//in set removed from the beggining and end of the str
//returns the trimmed string, null if alloc fails

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while ((end > start) && ft_checkset(s1[end - 1], set))
		--end;
	trim = malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
/*
int	main(void)
{
	char	s1[] = "  string trimmed here ";
	char	set[] = " ";
	
	char	trim = ft_strtrim(s1, set);

	printf("%s\n", trim);
	free(trim);
}*/