/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:48:16 by evaflete          #+#    #+#             */
/*   Updated: 2025/10/07 17:09:50 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sol;
	size_t	i;

	if (!s || start >= ft_strlen(s))
	{
		sol = (char *)malloc(1);
		if (!sol)
			return (NULL);
		sol[0] = '\0';
		return (sol);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sol = (char *)malloc(len + 1);
	if (!sol)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sol[i] = s[start + i];
		i++;
	}
	sol[i] = '\0';
	return (sol);
}

// int main() {
//     char *result;

//     // Test case 1: Normal case
//     result = ft_substr("Hello, World!", 7, 5);
//     printf("Test 1 - Expected: 'World', Got: '%s'\n", result);
//     free(result); // Don't forget to free allocated memory

//     // Test case 2: Starting from the beginning
//     result = ft_substr("Hello, World!", 0, 5);
//     printf("Test 2 - Expected: 'Hello', Got: '%s'\n", result);
//     free(result);

//     // Test case 3: Length exceeding string length
//     result = ft_substr("Hello, World!", 5, 100);
//     printf("Test 3 - Expected: ', World!', Got: '%s'\n", result);
//     free(result);

//     // Test case 5: Empty string input
//     result = ft_substr("", 0, 5);
//     printf("Test 5 - Expected: '', Got: '%s'\n", result); // Should be empty
//     free(result);

//     return (0);
// }
