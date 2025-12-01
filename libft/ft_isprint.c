/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:51:45 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:32:40 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// int main (void)
// {
// 	int c;
// 	int result;

// 	c = 'a';
// 	result = ft_isprint(c);
// 	printf("Cuando le pasas %d, devuelve %d\n", c, result);
// 	printf("Esta es la original: %d\n", isprint(c));
// 	printf("\n");
// 	c = '0';
//         result = ft_isprint(c);
//         printf("Cuando le pasas %d, devuelve %d\n", c, result);
//         printf("Esta es la original: %d\n", isprint(c));
// 	printf("\n");
// 	c = '\n';
//         result = ft_isprint(c);
//         printf("Cuando le pasas %d, devuelve %d\n", c, result);
//         printf("Esta es la original: %d\n", isprint(c));
// 	printf("\n");
// 	c = 31;
//         result = ft_isprint(c);
//         printf("Cuando le pasas %d, devuelve %d\n", c, result);
//         printf("Esta es la original: %d", isprint(c));
// }
