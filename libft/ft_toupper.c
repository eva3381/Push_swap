/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:15:24 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:13:59 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c -32;
	}
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("Mi función: %d\n", ft_toupper(c));
// 	printf("La función original: %d\n", toupper(c));
// 	c = 'A';
// 	printf("Mi función: %d\n", ft_toupper(c));
// 	printf("La función original: %d\n", toupper(c));
// 	c = '1';
// 	printf("Mi función: %d\n", ft_toupper(c));
// 	printf("La función original: %d\n", toupper(c));
// 	c = '\0';
// 	printf("Mi función: %d\n", ft_toupper(c));
// 	printf("La función original: %d\n", toupper(c));
// 	return (0);
// }
