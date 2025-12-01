/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:08:59 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:14:08 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')
	{
		return ((char *) big);
	}
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*big;
// 	const char	*little;
// 	size_t		len;

// 	big = "abcdefghijklmnopqrstuvwxyz";
// 	little = "mnopq";
// 	len = 30;
// 	printf("%s\n", ft_strnstr(big, little, len));
// 	//printf("%s\n", strnstr(big, little, len));
// }
