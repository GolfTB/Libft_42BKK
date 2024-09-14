/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:44:57 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 17:58:52 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = 's';
	c2 = '1';
	c3 = '!';
	c4 = ' ';
	printf("%d %d %d %d\n", ft_isalnum(c1), ft_isalnum(c2),
			ft_isalnum(c3), ft_isalnum(c4));
	return (0);
}
*/
