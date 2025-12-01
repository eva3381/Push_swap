/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:00:24 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/09 13:59:42 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*sol;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(n);
	sol = malloc(len + 1);
	if (!sol)
		return (NULL);
	sol[len] = '\0';
	if (nb < 0)
	{
		sol[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		sol[0] = '0';
	while (nb)
	{
		sol[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (sol);
}
