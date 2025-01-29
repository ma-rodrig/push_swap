/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:06:28 by marodrig          #+#    #+#             */
/*   Updated: 2025/01/29 01:42:56 by marodrig         ###   ########.fr       */
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
int	ft_error_syntax(char *str_n);
int	ft_error_duplicate(t_stack_node *a, int n);
void	ft_free_stack(t_stack_node **stack);
void	ft_free_errors(t_stack_node **a);

//Stack initiation
void		ft_init_stack_a(t_stack_node **a, char **argv);
t_stack_node	*ft_get_cheapest(t_stack_node *stack);
void	ft_prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name);

//Nodes initiation
void	ft_current_index(t_stack_node *stack);
void	ft_set_cheapest(t_stack_node *stack);
void	ft_init_nodes_a(t_stack_node *a, t_stack_node *b);
void	ft_init_nodes_b(t_stack_node *a, t_stack_node *b);


//Stack utils
int	ft_stack_len(t_stack_node *stack);
t_stack_node	*ft_find_last(t_stack_node *stack);
bool	ft_stack_sorted(t_stack_node *stack);
t_stack_node	*ft_find_max(t_stack_node *stack);
t_stack_node	*ft_find_min(t_stack_node *stack);

//Commands
void	pa(t_stack_node **a, t_stack_node **b, bool print);
void	pb(t_stack_node **b, t_stack_node **a, bool print);
void	rra(t_stack_node **a, bool print);
void	rrb(t_stack_node **b, bool print);
void	rrr(t_stack_node **a, t_stack_node **b, bool print);
void ra(t_stack_node **a, bool print);
void	rb(t_stack_node **b, bool print);
void	rr(t_stack_node **a, t_stack_node **b, bool print);
void	sa(t_stack_node **a, bool print);
void	sb(t_stack_node **b, bool print);
void	ss(t_stack_node **a, t_stack_node **b, bool print);

//Algorithms
void	ft_sort_three(t_stack_node **a);
void	ft_sort_stacks(t_stack_node **a, t_stack_node **b);

# endif


