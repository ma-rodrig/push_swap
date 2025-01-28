/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:32:56 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 17:36:54 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//description: Counts the number of nodes in a list 
//lst -> ptr to the 1st element of linked list
//returns the nbr of elements in the linked list
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* int	main(void)
{
	t_list *lst = ft_lstnew("1234");
	t_list *new = ft_lstnew("5678");

	lst->next = new;
	new->next = NULL;

	result = ft_lstadd_back(lst, new);

	printf("%);
} */