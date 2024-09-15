/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:10:44 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/15 12:49:14 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_get_str(char const *s, char c, char **res)
{
	int	i;
	int	m;
	int	n;

	i = 0;
	m = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			res[m][n] = s[i];
			n++;
		}
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			res[m][n] = '\0';
			m++;
			n = 0;
		}
		i++;
	}
	res[m] = NULL;
}

void	ft_get_tab(char const *s, char c, char **res)
{
	int	i;
	int	m;
	int	n;

	n = 0;
	m = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
			n++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			res[m] = malloc(sizeof(char) * (n + 1));
			if (!res[m])
			{
				while (res[m])
					free(res[m--]);
			}
			m++;
			n = 0;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		co;
	char	**res;

	co = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			co++;
		i++;
	}
	res = (char **)malloc(sizeof(char *) * (co + 1));
	if (!res)
		return (NULL);
	ft_get_tab(s, c, res);
	ft_get_str(s, c, res);
	return (res);
}