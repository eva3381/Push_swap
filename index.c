/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:38:46 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 14:52:03 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_indices(t_node *a, int size)
{
	t_node	*min;
	t_node	*cur;
	int		idx;

	idx = 0;
	while (++idx <= size)
	{
		min = NULL;
		cur = a;
		while (cur)
		{
			if (cur->index == -1 && (!min || cur->value < min->value))
				min = cur;
			cur = cur->next;
		}
		if (min)
			min->index = idx;
	}
}
