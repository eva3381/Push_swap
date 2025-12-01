/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:17:57 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/09 18:59:06 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned long	i;
	unsigned long	l;
	char			*sol;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	sol = malloc((l + 1));
	if (!sol)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i] = '\0';
	return (sol);
}
