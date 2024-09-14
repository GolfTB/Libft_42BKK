/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:45:08 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 15:37:32 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
/*#include <stdio.h>

int    main(void)
{
    int    a;
    int    b;
    int    c;
    int    d;

    a = '1';
    b = 'A';
    c = '!';
    d = ' ';
    printf("%d %d %d %d\n",ft_isdigit(a), ft_isdigit(b),
    	ft_isdigit(c), ft_isdigit(d));
}
*/
