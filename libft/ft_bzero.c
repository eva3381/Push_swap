/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 06:45:52 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:14:39 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	a1[10];
// 	char	a2[10];
// 	size_t		i;

// 	i = 0;
// 	while (i < 9)
// 	{
// 		a1[i] = 'X';
// 		a2[i] = 'X';
// 		i++;
// 	}
// 	a1[9] = '\0';
// 	a2[9] = '\0';
// 	i = 0;
// 	printf("a1(antes de aplicar la función): %s\n", a1);
// 	printf("a2(antes de aplicar la función): %s\n", a2);
// 	ft_bzero(a1, 5);
// 	bzero(a2, 5);
// 	printf("Mi función: ");
// 	while (i < 9)
// 	{
// 		printf("%d", a1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("Función original: ");
// 	i = 0;
// 	while (i < 9)
// 	{
// 		printf("%d", a2[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
