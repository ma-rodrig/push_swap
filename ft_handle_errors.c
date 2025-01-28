/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:43:50 by marodrig          #+#    #+#             */
/*   Updated: 2025/01/28 13:53:44 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_syntax(char *str_n)
{
	if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
		return (1);
	if ((*str_n == '+' || *str_n == '-' && !(str_n[1] >= '0' && str_n[1] <= '9')))
		return (1);
	while (*++str_n)
	{
		if (!(*str_n >= '0' && *str_n <= '9'))
			return (1);
	}
	return (0);
}

int	ft_error_duplicate(t_stack_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	ft_free_stack(t_stack_node **stack)
{
	t_stack_node	*temp;
	t_stack_node	*curr;

	if (!stack)
		return ;
	while (curr)
	{
		temp = curr->next;
		curr->nbr = 0;
		free(curr);
		curr = temp;
	}
	*stack = NULL;
}

void	ft_free_errors(t_stack_node **a)
{
	ft_free_stack(a);
	ft_printf("Error\n");
	exit(1);
}