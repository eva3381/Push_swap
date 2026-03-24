/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:59:24 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/04 16:47:11 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_chunks(t_node **a, t_node **b, int size)
{
	int	chunk;

	if (size <= 100)
		chunk = 20;
	else
		chunk = 40;
	push_to_b(a, b, chunk, size);
	push_back_to_a(a, b);
}
