/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:39:16 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/15 12:50:00 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_space(const char *c, int i)
{
	while (c[i])
	{
		if (c[i] == '\r' || c[i] == '\n' || c[i] == '\f')
			i++;
		else if (c[i] == '\v' || c[i] == '\t' || c[i] == ' ')
			i++;
		else
			break ;
	}
	return (i);
}

long	get_num(const char *str, int i)
{
	long	num;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	num;

	i = 0;
	neg = 1;
	i = check_space(str, i);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	num = get_num(str, i);
	if (neg == -1 && num > 2147483648)
		return (-2147483648);
	if (neg == 1 && num > 2147483647)
		return (2147483647);
	return ((int)(num * neg));
}

/*#include <stdio.h>

int	main(void) {
	printf("%d\n", ft_atoi("   --1234"));     // 0
	printf("%d\n", ft_atoi("42abc"));         // 42
	printf("%d\n", ft_atoi("12324311207"));   // 2147483647
	printf("%d\n", ft_atoi("   +-0"));        // 0
	printf("%d\n", ft_atoi(" \t\v\n1234"));   // 1234
	return (0);
}*/
