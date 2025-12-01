/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:29:56 by evaflete          #+#    #+#             */
/*   Updated: 2025/12/01 14:50:39 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol_ps(const char *s)
{
	long	sign;
	long	n;
	int		i;

	sign = 1;
	n = 0;
	i = 0;
	if (s[i] == '+' || s[i] == '-')
		if (s[i++] == '-')
			sign = -1;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			error_exit();
		n = n * 10 + (s[i] - '0');
		if ((n * sign) > 2147483647 || (n * sign) < -2147483648)
			error_exit();
		i++;
	}
	return (n * sign);
}

static void	check_duplicates(t_node *a, int value)
{
	while (a)
	{
		if (a->value == value)
			error_exit();
		a = a->next;
	}
}

static void	ft_free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

t_node	*parse_args(int ac, char **av)
{
	t_node	*a;
	int		i;
	char	**split;
	int		j;
	long	n;

	i = 1;
	a = NULL;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		if (!split)
			error_exit();
		j = 0;
		while (split[j])
		{
			n = ft_atol_ps(split[j]);
			check_duplicates(a, (int)n);
			append_node(&a, new_node((int)n));
			j++;
		}
		ft_free_split(split);
		i++;
	}
	return (a);
}
