/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:13:30 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/20 18:05:07 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		*lst = new;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list *lst = NULL;
	t_list *new_node1 = ft_lstnew("node1: 123");
	t_list *new_node2 = ft_lstnew("node2: 456");

	ft_lstadd_front(&lst, new_node1);
	ft_lstadd_front(&lst, new_node2);

	t_list *current = lst;
	while (current)
	{
		printf("node data: %s\n", (char *)current->content);
		current = current->next;
	}
	free(current);
} */