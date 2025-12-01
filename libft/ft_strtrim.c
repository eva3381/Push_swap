/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:32:57 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/09 14:07:33 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*sol;
	size_t		i;
	size_t		j;
	size_t		t;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_check(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_check(s1[j - 1], set))
		j--;
	sol = malloc(j - i + 1);
	if (!sol)
		return (NULL);
	t = 0;
	while (i < j)
	{
		sol[t++] = s1[i++];
	}
	sol[t] = '\0';
	return (sol);
}
