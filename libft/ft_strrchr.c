/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:25:31 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:13:51 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&(s[i]));
		}
		i--;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*s;
// 	int			c;

// 	s = "Hola que tal";
// 	c = 'a';
// 	printf("Mi función: %s\n", ft_strrchr(s, c));
// 	printf("Función orignal: %s\n", strrchr(s, c));
// 	s = "Hola que tal";
// 	c = 'b';
// 	printf("Mi función: %s\n", ft_strrchr(s, c));
// 	printf("Función orignal: %s\n", strrchr(s, c));
// 	s = "Hola que tal";
// 	c = 'q';
// 	printf("Mi función: %s\n", ft_strrchr(s, c));
// 	printf("Función orignal: %s\n", strrchr(s, c));
// 	s = "Hola que tal";
// 	c = '\0';
// 	printf("Mi función: %s\n", ft_strrchr(s, c));
// 	printf("Función orignal: %s\n", strrchr(s, c));
// 	return (0);
// }