/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:06:28 by marodrig          #+#    #+#             */
/*   Updated: 2025/01/28 02:52:33 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <limits.h>
# include <stdbool.h>

typedef struct	s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	
}	t_stack_node;

//Handle errors

//Stack initiation
void		ft_init_stack_a(t_stack_node **a, char **argv);


//Nodes initiation
void	ft_current_index(t_stack_node *stack);
void	ft_set_cheapest(t_stack_node *stack);
void	ft_init_nodes_a(t_stack_node *a, t_stack_node *b);

//Stack utils
bool	ft_stack_sorted(t_stack_node *stack);
t_stack_node	*ft_find_min(t_stack_node *stack);

//Commands

//Algorithms
void	ft_sort_three(t_stack_node **a);  


# endif


