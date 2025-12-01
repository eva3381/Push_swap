/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:23:21 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:48:46 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("Mi función: %d\n", ft_tolower(c));
// 	printf("La función original: %d\n", tolower(c));
// 	c = 'A';
// 	printf("Mi función: %d\n", ft_tolower(c));
// 	printf("La función original: %d\n", tolower(c));
// 	c = '1';
// 	printf("Mi función: %d\n", ft_tolower(c));
// 	printf("La función original: %d\n", toupper(c));
// 	c = '\0';
// 	printf("Mi función: %d\n", ft_tolower(c));
// 	printf("La función original: %d\n", tolower(c));
// 	return (0);
// }