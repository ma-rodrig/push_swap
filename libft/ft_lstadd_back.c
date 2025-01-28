/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:32:06 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/28 14:11:29 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//adds the node 'new' at the end of the list
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

/* int	main(void)
{
	t_list *lst = NULL;
	t_list *new_node1 = ft_lstnew("node1: 123");
	t_list *new_node2 = ft_lstnew("node2: 456");

	ft_lstadd_back(&lst, new_node1);
	ft_lstadd_back(&lst, new_node2);

	t_list *current = lst;
	while (current)
	{
		printf("node data: %s\n", (char *)current->content);
		current = current->next;
	}
	free(current);
} */