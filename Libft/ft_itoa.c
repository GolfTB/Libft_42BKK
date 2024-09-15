/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:56:35 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/15 10:36:46 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	getlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	len = getlen(n);
	num = (long)n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	else if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
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
