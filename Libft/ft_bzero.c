/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:39:23 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/14 17:58:38 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}
/*
#include <stdio.h>

int	main(void) {
	char str[] = "Hello, World!";
	int    i;

	i = 0;
	ft_bzero(str, 5);

	while (i < 13)
	{
		if (str[i] == '\0')
			printf("0 ");
		else
			printf("%c", str[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
