/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 09:26:36 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 14:48:06 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a1;
	const unsigned char	*a2;

	i = 0;
	a1 = (const unsigned char *)s1;
	a2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (a1[i] != a2[i])
		{
			return (a1[i] - a2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	a1[10]="XXXXXXXXXX";
// 	char	a2[10]="XXXXXXX";

// 	printf("Mi función: %d\n", ft_memcmp(a1, a2, 10));
// 	printf("Función original: %d\n", memcmp(a1, a2, 10));
// 	return (0);
// }
