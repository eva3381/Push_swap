/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:15:23 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:46:00 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	char	*c;

// 	c = "Hola";
// 	printf("Mi función: %lu\n", ft_strlen(c));
// 	printf("La función original: %lu\n", strlen(c));
// 	c = "Hola,     que tal?";
//         printf("Mi función: %lu\n", ft_strlen(c));
//         printf("La función original: %lu\n", strlen(c));
// 	c = "";
//         printf("Mi función: %lu\n", ft_strlen(c));
//         printf("La función original: %lu\n", strlen(c));

// 	return (0);
// }
