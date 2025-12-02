/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:23:40 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 14:17:52 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	int		size;

	if (ac < 2)
		return (0);
	a = parse_args(ac, av);
	b = NULL;
	size = stack_size(a);
	if (is_sorted(a))
		return (free_stack(&a), 0);
	assign_indices(a, size);
	if (size <= 5)
		sort_5(&a, &b);
	else
		sort_chunks(&a, &b, size);
	free_stack(&a);
	return (0);
}
