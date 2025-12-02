/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evafletefolgueira <evafletefolgueira@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 00:00:00 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/02 23:44:26 by evafletefol      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_min_and_push(t_node **a, t_node **b, int size)
{
	int		i;
	int		min_index;
	int		min_pos;

	i = 0;
	min_index = 1;
	min_pos = 0;
	while (i < size)
	{
		if ((*a)->index == min_index)
			min_pos = i;
		(*a) = (*a)->next;
		i++;
	}
	i = 0;
	while (i < min_pos)
	{
		ra(a);
		i++;
	}
	pb(a, b);
}

void	sort_5(t_node **a, t_node **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 5)
	{
		find_min_and_push(a, b, 5);
		find_min_and_push(a, b, 4);
		sort_3(a);
		pa(a, b);
		pa(a, b);
	}
	else if (size == 4)
	{
		find_min_and_push(a, b, 4);
		sort_3(a);
		pa(a, b);
	}
	else if (size == 3)
		sort_3(a);
}
