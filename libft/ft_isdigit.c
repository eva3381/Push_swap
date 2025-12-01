/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:28:23 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 13:13:45 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (('0' <= c && c <= '9'))
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
// 	char *str;
// 	char	str1[] = "";

// 	str = &str1[0];
// 	rest = ft_isdigit(str);
// 	if (rest == 1)
// 		printf("Solo hay numeros o está vacío");
// 	else
// 		printf("Hay algo que no es numeros.");
// 	return (0);
// }