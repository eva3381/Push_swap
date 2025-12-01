/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:41:09 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 13:44:03 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_nodes(t_node **s)
{
	t_node	*a;
	t_node	*b;

	if (!*s || !(*s)->next)
		return ;
	a = *s;
	b = a->next;
	a->next = b->next;
	b->next = a;
	*s = b;
}

void	sa(t_node **a)
{
	swap_nodes(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap_nodes(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	swap_nodes(a);
	swap_nodes(b);
	write(1, "ss\n", 3);
}
