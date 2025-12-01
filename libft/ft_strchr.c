/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:26:27 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:56:23 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*s;
// 	int			c;

// 	s = "Hola que tal";
// 	c = 'a';
// 	printf("Mi función: %s\n", ft_strchr(s, c));
// 	printf("Función orignal: %s\n", strchr(s, c));
// 	s = "Hola que tal";
// 	c = 'b';
// 	printf("Mi función: %s\n", ft_strchr(s, c));
// 	printf("Función orignal: %s\n", strchr(s, c));
// 	s = "Hola que tal";
// 	c = 'q';
// 	printf("Mi función: %s\n", ft_strchr(s, c));
// 	printf("Función orignal: %s\n", strchr(s, c));
// 	s = "Hola que tal";
// 	c = '\0';
// 	printf("Mi función: %s\n", ft_strchr(s, c));
// 	printf("Función orignal: %s\n", strchr(s, c));
// 	return (0);
// }
