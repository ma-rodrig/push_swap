/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:09:55 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 17:06:45 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iterates the lst and applies function f on the content of each node
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/* 
void ft_f(void *content)
{
	printf("content: %s\n", (char *)content);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst, node1);

	t_list *node2 = ft_lstnew(ft_strdup("world"));
	ft_lstadd_back(&lst, node2);

	ft_lstiter(lst, ft_f);
} */