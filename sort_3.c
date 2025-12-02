/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 00:00:00 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/02 00:00:00 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **a)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	first = *a;
	second = first->next;
	third = second->next;
	if (first->index > second->index && second->index > third->index)
	{
		sa(a);
		rra(a);
	}
	else if (first->index > third->index && third->index > second->index)
		ra(a);
	else if (second->index > first->index && first->index > third->index)
		rra(a);
	else if (second->index > third->index && third->index > first->index)
	{
		sa(a);
		ra(a);
	}
	else if (third->index > first->index && first->index > second->index)
		sa(a);
}
