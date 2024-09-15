/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:24:00 by paphetpr          #+#    #+#             */
/*   Updated: 2024/09/15 12:52:21 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_split_next
{
	size_t			start;
	size_t			length;
}					t_split_next;

long				get_num(const char *str, int i);

int					check_space(const char *c, int i);

int					ft_atoi(const char *str);

void				ft_bzero(void *s, size_t n);

void				*ft_calloc(size_t count, size_t size);

int					ft_isalnum(int c);

int					ft_isalpha(int c);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

size_t				get_len(int n);

char				*ft_itoa(int n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memcpy(void *dst, const void *src, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t numBytes);

void				*ft_memset(void *b, int c, size_t len);

void				ft_putchar_fd(char c, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_get_str(char const *s, char c, char **res);

void				ft_get_tab(char const *s, char c, char **res);

char				**ft_split(char const *s, char c);

char				*ft_strchr(const char *s, int c);

char				*ft_strdup(const char *s1);

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

char				*ft_strjoin(char const *s1, char const *s2);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

size_t				ft_strlcpy(char *dst, const char *src, size_t size);

size_t				ft_strlen(const char *s);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strnstr(const char *big, const char *little,
						size_t len);

char				*ft_strrchr(const char *s, int c);

char				*ft_strtrim(char const *s1, char const *set);

char				*ft_substr(char const *str, unsigned int start, size_t len);

int					ft_tolower(int c);

int					ft_toupper(int c);

#endif