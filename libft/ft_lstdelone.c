/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:01:29 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 16:51:11 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//frees the mem of the node content using del and frees the node
//the mem of next must not be freed
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

/* void	ft_del(void *content)
{
   free(content);
   printf ("del\n");
}


int	main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst, node1);
	t_list *ptr = lst;
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ft_lstdelone(lst, ft_del);

	printf("worked!\n");
	
} */
