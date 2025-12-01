/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:37:13 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:13:42 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
//  {
//  	int	result;
//  	int c;

//  	c = 0;
//         result = ft_isascii(c);
//         printf("Si le pasamos %d, devuelve %d\n", c, result);
// 	c = '~';
//        result = ft_isascii(c);
//        printf("Si le pasamos %d, devuelve %d\n", c, result);
//     c = 128;
//        result = ft_isascii(c);
//        printf("Si le pasamos %c, devuelve %d\n", c, result); 
//}
