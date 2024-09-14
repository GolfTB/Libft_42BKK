/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:23:32 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/14 18:23:36 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
/*
#include <stdio.h>
int    main(void)
{
    int    a;
    int    b;
    int    c;
    int    d;

    a = '1';
    b = 'A';
    c = '!';
    d = '\0';
    printf("%d %d %d %d\n",ft_isprint(a), ft_isprint(b), 
    		ft_isprint(c), ft_isprint(d));
}
*/
