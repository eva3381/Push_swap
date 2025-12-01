/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:18:42 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:14:41 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n != 0)
	{
		*p = (unsigned char )c;
		p++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	a[10]="XXXXXXXXXX";
// 	printf("Mi función: %s\n", (char *)ft_memset(a, 'a', 8));
// 	printf("Función original: %s\n", (char *)memset(a, 'a', 8));
// 	return (0);
// }
