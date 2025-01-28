/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 02:12:03 by marodrig          #+#    #+#             */
/*   Updated: 2025/01/28 02:17:13 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ft_current_index(*a);
	ft_min_on_top(a);
}