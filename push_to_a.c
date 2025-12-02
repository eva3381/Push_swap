/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:02:48 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 17:29:37 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max(t_node *b)
{
	int	max;

	max = 0;
	while (b)
	{
		if (b->index > max)
			max = b->index;
		b = b->next;
	}
	return (max);
}

static int	pos_of(t_node *b, int max)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->index == max)
			return (pos);
		pos++;
		b = b->next;
	}
	return (pos);
}

void	push_back_to_a(t_node **a, t_node **b)
{
	int	max;
	int	pos;
	int	size;

	while (*b)
	{
		max = find_max(*b);
		pos = pos_of(*b, max);
		size = stack_size(*b);
		if (pos <= size / 2)
			while ((*b)->index != max)
				rb(b);
		else
			while ((*b)->index != max)
				rrb(b);
		pa(a, b);
	}
}
