/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:16:53 by evaflete          #+#    #+#             */
/*   Updated: 2025/11/17 19:59:22 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sol;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	sol = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!sol)
		return (NULL);
	while (s1[i] != '\0')
	{
		sol[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		sol[j] = s2[i];
		i++;
		j++;
	}
	sol[j] = '\0';
	return (sol);
}
