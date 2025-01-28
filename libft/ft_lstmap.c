/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:21:30 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/16 17:26:51 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iterates lst and applies f to the content of each node (lst_addback)
//creates a new lst resulting from succeess apps of f (lstnew)
//del is used to delete the content of a node if needed (lstclear)
// returns the new list
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}

/* static void	ft_del(void *content)
{
    free(content);
}

void	*ft_f(void *content)
{
	size_t	i;
	
	i = 0;
	if (content == NULL)
		return (NULL);
	char *str = ft_strdup((char *)content);

	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst, node1);

	t_list	*new_lst = ft_lstmap(lst, ft_f, ft_del);

	printf("%s\n", (char *)new_lst->content);
} */