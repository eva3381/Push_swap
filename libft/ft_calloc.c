/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:24:20 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 15:33:51 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	t_size;

	t_size = nmemb * size;
	p = malloc(t_size);
	if (!p)
	{
		return (0);
	}
	ft_bzero(p, t_size);
	return (p);
}
