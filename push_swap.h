/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:23:10 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 14:51:35 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

void	error_exit(void);
t_node	*new_node(int n);
void	append_node(t_node **stack, t_node *new);
int		stack_size(t_node *a);
int		is_sorted(t_node *a);
void	assign_indices(t_node *a, int size);
void	free_stack(t_node **s);
t_node	*parse_args(int ac, char **av);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	sort_3(t_node **a);
void	sort_5(t_node **a, t_node **b);
void	sort_chunks(t_node **a, t_node **b, int size);
void	push_to_b(t_node **a, t_node **b, int chunk, int size);
void	push_back_to_a(t_node **a, t_node **b);

#endif