/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:00:40 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 17:31:09 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_node **a, t_node **b, int chunk, int size)
{
	int	limit;
	int	pushed;

	limit = chunk;
	pushed = 0;
	while (pushed < size)
	{
		if ((*a)->index <= limit)
		{
			pb(a, b);
			pushed++;
			if ((*b)->index > limit - (chunk / 2))
				rb(b);
		}
		else
			ra(a);
		if (pushed == limit)
			limit += chunk;
	}
}
