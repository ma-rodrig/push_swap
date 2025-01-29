/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:39:40 by marodrig          #+#    #+#             */
/*   Updated: 2025/01/29 01:30:16 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// stack a is fomratted as a list of int
// malloc to alocate the mem to create stack b, free stack b in the end
// return the smallest list of operations used, separated by a \n, not the sorted list

/*******************************************************************************************************************/
/* steps:
	1) atoi: convert the numbers passed as arguments
	
	2)sort those numbers - ideally in a linked list (avoid freeing
	and allocating arrays): ***	revisit linked lists***
		typedef struct node
		{
			int nb; -> intenger in our stack
			struct node *next; -> next structure element in our doubly linked list
			struct node *prev; -> previous structure element in our doubly linked list
		}	t_node;
	
		->> to sort the numbers use 2 stacks (STACK A (which is our linked) and STACK B (we create a linked list and 
		assign it NULL, maybe malloc or calloc))
		
*********************************************************************************************************************/

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	ft_init_stack_a(&a, argv + 1);
	if (!ft_stack_sorted(a))
	{
		if (ft_stack_len(a) == 2)
			sa((&a), false);
		else if (ft_stack_len(a) == 3)
			ft_sort_three(&a);
		else
			ft_sort_stacks(&a, &b);
	}
	ft_free_stack(&a);
	return (0);
}