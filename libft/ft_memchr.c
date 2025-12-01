/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 08:20:07 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 14:46:20 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
		{
			return ((void *)&src[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*s;
// 	int			c;

// 	s = "Hola que tal";
// 	c = 'a';
// 	printf("Mi función(busando: %c): %s\n", c, (char *)ft_memchr(s, c, 12));
// 	printf("Función orignal(busando: %c): %s\n", c, (char *)memchr(s, c, 12));
// 	s = "Hola que tal";
// 	c = 'b';
// 	printf("Mi función(busando: %c): %s\n", c, (char *)ft_memchr(s, c, 12));
// 	printf("Función orignal(busando: %c): %s\n", c, (char *)memchr(s, c, 12));
// 	s = "Hola que tal";
// 	c = 'q';
// 	printf("Mi función(busando: %c): %s\n", c, (char *)ft_memchr(s, c, 12));
// 	printf("Función orignal(busando: %c): %s\n", c, (char *)memchr(s, c, 12));
// 	s = "Hola que tal";
// 	c = '\0';
// 	printf("Mi función: %s\n", (char *)ft_memchr(s, c, 12));
// 	printf("Función orignal: %s\n", (char *)memchr(s, c, 12));
// 	return (0);
// }
