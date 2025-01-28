/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:14:50 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/28 14:16:40 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocs and returns an array os strs obtained by splitting s, using
//the char as a delimeter. the array must end with a NULL pointer

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			i++;
			j = 1;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

static int	count_char(char *s, char c)
{
	int	w;

	w = 0;
	while (*s && *s != c)
	{
		w++;
		s++;
	}
	return (w);
}

static void	free_arr(int p, char **arr)
{
	while (p > 0)
	{
		p--;
		free(*(arr + p));
	}
	free(arr);
}

static void	ft_array(char *s, char **arr, char c)
{
	int	a;
	int	b;
	int	d;

	a = 0;
	d = 0;
	while (a < count_words(s, c))
	{
		if (s[d] && s[d] != c)
		{
			arr[a] = malloc(sizeof(char) * (count_char((char *)s + d, c) + 1));
			if (!arr)
				free_arr(a, arr);
			b = 0;
			while (s[d] && s[d] != c)
				arr[a][b++] = s[d++];
			arr[a][b] = '\0';
			a++;
		}
		if (s[d] && s[d] == c)
			d++;
	}
	arr[a] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		e;

	if (!s)
		return (NULL);
	e = count_words(s, c);
	arr = malloc(sizeof(char *) * (e + 1));
	if (!arr)
		return (NULL);
	ft_array((char *)s, arr, c);
	return (arr);
}

/* int	main(void)
{
	char s[] = "abc sdc cdgh234";

	char **split_arr = ft_split(s, ' ');

	int i = 0;
	while (split_arr[i])
	{
		printf("%s\n", split_arr[i]);
		i++;
	}
	
} */