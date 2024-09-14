/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:39:16 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/14 17:58:30 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num(const char *str, int i)
{
	int	num;

	num = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + str[i] - '0';
			i++;
		}
		else
			break ;
	}
	return (num);
}

int	check_space(const char *c, int i)
{
	while (c[i])
	{
		if (c[i] == '\r' || c[i] == '\n' || c[i] == '\f' )
			i++;
		else if (c[i] == '\v' || c[i] == '\t' || c[i] == ' ' )
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	i = check_space(str, i);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	return (get_num(str, i) * neg);
}
/*
#include <stdio.h>

int main() {
    printf("%d\n", ft_atoi("   -1234"));
    printf("%d\n", ft_atoi("42abc"));
    printf("%d\n", ft_atoi("+007"));
    printf("%d\n", ft_atoi("   +-0"));
    printf("%d\n", ft_atoi(" \t\v\n1234"));
    return 0;
}
*/