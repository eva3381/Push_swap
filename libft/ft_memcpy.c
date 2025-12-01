/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 07:29:16 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/08 16:00:47 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	a1[10] = "";
// 	char	a2[10] = "";
// 	char	d1[10] = "";
// 	char	d2[10] = "";
// 	size_t	i;

// 	i = 0;
// 	while (i < 9)
// 	{
// 		a1[i] = '1';
// 		a2[i] = '1';
// 		d1[i] = '0';
// 		d2[i] = '0';
// 		i++;
// 	}
// 	a1[9] = '\0';
// 	a2[9] = '\0';
// 	i = 0;
// 	printf("src1(antes de aplicar la función): %s\n", a1);
// 	printf("dst1(antes de aplicar la función): %s\n", d1);
// 	printf("src2(antes de aplicar la función): %s\n", a2);
// 	printf("dst2(antes de aplicar la función): %s\n", d2);
// 	ft_memcpy(d1, a1, 5);
// 	memcpy(d2, a2, 5);
// 	printf("Mi función: ");
// 	while (i < 9)
// 	{
// 		printf("%c", (char)d1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("Función original: ");
// 	i = 0;
// 	while (i < 9)
// 	{
// 		printf("%c", (char)d2[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
