/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:25:22 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/14 16:15:43 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_worddup(char const *s, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static int	ft_split_inside(char const *s, char c, char **sol, int i)
{
	int	len;

	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len)
		{
			sol[i] = ft_worddup(s, len);
			if (!sol[i++])
				return (0);
		}
		s += len;
	}
	sol[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**sol;
	int		i;

	if (!s)
		return (NULL);
	sol = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!sol)
		return (NULL);
	i = 0;
	if (ft_split_inside(s, c, sol, i) == 0)
		return (free_matrix(sol), NULL);
	return (sol);
}
