/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 08:05:23 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/08 16:01:56 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
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
// 	ft_memmove(d1, a1, 3);
// 	memmove(d2, a2, 3);
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
