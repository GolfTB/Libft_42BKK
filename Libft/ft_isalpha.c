/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/7 11:45:00 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 15:35:34 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 'a';
	b = 'A';
	c = '!';
	d = ' ';
	printf("%d %d %d %d\n",ft_isalpha(a), ft_isalpha(b),
		ft_isalpha(c), ft_isalpha(d));
}
*/
