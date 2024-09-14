/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:56:35 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/14 19:31:57 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int number)
{
	size_t	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	size_t			length;

	number = (unsigned int)n;
	length = get_len(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	if (number < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[--length] = (number % 10) + '0';
		number = number / 10;
	}
	return (string);
}

/*
int	main(void) {
	char *result;

	result = ft_itoa(1234);
	printf("ft_itoa(1234) = %s\n", result);
	free(result);

	result = ft_itoa(-1234);
	printf("ft_itoa(-1234) = %s\n", result);
	free(result);

	result = ft_itoa(0);
	printf("ft_itoa(0) = %s\n", result);
	free(result);

	result = ft_itoa(-2147483648);
	printf("ft_itoa(-2147483648) = %s\n", result);
	free(result);

	result = ft_itoa(2147483647);
	printf("ft_itoa(2147483647) = %s\n", result);
	free(result);

	return (0);
}
*/
