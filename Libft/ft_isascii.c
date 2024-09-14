/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:45:03 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 15:36:46 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>

int    main(void)
{
    int    a;
    int    b;
    int    c;
    int    d;

    a = 'a';
    b = 'A';
    c = '\0';
    d = '©';
    printf("%d %d %d %d\n",ft_isascii(a), ft_isascii(b), 
    ft_isascii(c), ft_isascii(d));
}
*/
