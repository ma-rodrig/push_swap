/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:10:00 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 17:03:36 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns the last node on the list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst, node1);
	
	ft_lstadd_back(&lst, ft_lstnew("world"));
	
	t_list *last_elem = ft_lstlast(lst);

	printf("%s\n", (char *)last_elem->content);
} */