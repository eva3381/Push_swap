/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:35:35 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 14:51:52 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int n)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		error_exit();
	node->value = n;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	append_node(t_node **stack, t_node *new)
{
	t_node	*temp;

	if (!*stack)
		return (*stack = new, (void)0);
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

int	stack_size(t_node *a)
{
	int	i;

	i = 0;
	while (a && ++i)
		a = a->next;
	return (i);
}

void	free_stack(t_node **s)
{
	t_node	*tmp;

	while (*s)
	{
		tmp = (*s)->next;
		free(*s);
		*s = tmp;
	}
}

int	is_sorted(t_node *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}
