/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:24:40 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 15:09:40 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	rest;
// 	int	c;

// 	c = '\0';
// 	rest = ft_str_is_alpha(c);
// 	if (rest == 1)
// 		printf("Solo hay letras o está vacío");
// 	else
// 		printf("Hay algo que no es letras.");
// 	return (0);
// }
