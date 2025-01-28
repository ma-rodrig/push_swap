/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:31:06 by marodrig          #+#    #+#             */
/*   Updated: 2025/01/28 23:45:13 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rr(a, b, false);
	ft_current_index(*a);
	ft_current_index(*b);
}
static void	rev_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rrr(a, b, false);
	ft_current_index(*a);
	ft_current_index(*b);
}
static void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	ft_prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}
static void	ft_min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != ft_find_min(*a)->nbr)
	{
		if (ft_find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}
void	ft_sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = ft_stack_len(*a);
	if (len_a-- > 3 && !ft_stack_sorted(*a))
		pb(b, a, false);
	if (len_a-- > 3 && !ft_stack_sorted(*a))
		pb(b, a, false);
	while (len_a-- > 3 && !ft_stack_sorted(*a))
	{
		ft_init_nodes_a(*a, *b);
		ft_move_a_to_b(a, b);
	}
	ft_sort_three(a);
	while (*b)
	{
		ft_init_nodes_b(*a, *b);
		ft_move_b_to_a(a, b);
	}
	ft_current_index(*a);
	ft_min_on_top(a);
}
