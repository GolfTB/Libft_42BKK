/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <paphetpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:56:37 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/14 15:42:17 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str++ == (unsigned char)c)
			return (str - 1);
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
    const char str[] = "Hello, World!";
    char *result = ft_memchr(str, 'e', 5);
    printf("%ld\n", result - str);
}
*/
