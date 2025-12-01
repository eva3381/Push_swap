/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:59:57 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 15:21:34 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = ft_strlen(src);
	while (dst[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + 1 + i) < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	const char	*src = " que tal";
// 	char		dst[20] = "Hola";
// 	size_t		size;

// 	size = 12;
// 	printf("Mi función: %lu\n", ft_strlcat(dst, src, size));
// 	printf("Dest: %s", dst);
// 	return (0);
// }
