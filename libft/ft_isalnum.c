/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:50:33 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:13:48 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else if (97 <= c && c <= 122)
	{
		return (1);
	}
	else if (65 <= c && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
//     char c;
//     int result;

//     c = 0;
//     result = ft_isalnum(c);
//     printf("Si le pasamos %s, devuelve %d\n", c, result);
//     c = a;
//     result = ft_isalnum(c);
//     printf("Si le pasamos %s, devuelve %d\n", c, result);
//     c = +;
//     result = ft_isalnum(c);
//     printf("Si le pasamos %s, devuelve %d\n", c, result);
//     return (0);
// }
