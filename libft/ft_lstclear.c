/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:16:28 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/21 17:05:07 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//deletes and frees the given node and every successor of it, using del and free
//the ptr to the lst must be set to NULL
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/* void	ft_del(void *content)
{
    free(content);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst, node1);
	
	t_list *node2 = ft_lstnew(ft_strdup("world"));
	ft_lstadd_back(&lst, node2);

	t_list *ptr = lst;

	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	
	ft_lstclear(&lst, ft_del);

	printf("%s\n", (char *)ft_lstlast(lst));
}  */