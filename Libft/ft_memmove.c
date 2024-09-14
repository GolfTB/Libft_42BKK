/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:11:31 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/14 19:11:44 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t numBytes)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		i = numBytes;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < numBytes)
		{
			((unsigned char *)src)[i] = ((unsigned char *)dst)[i];
			i++;
		}
	}
	return (dst);
}
