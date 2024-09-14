# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/14 18:12:23 by paphetpr          #+#    #+#              #
#    Updated: 2024/09/14 19:41:48 by paphetpr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS =  ft_isdigit.c\
		ft_memcpy.c\
		ft_split.c\
		ft_strlen.c\
		ft_tolower.c\
		ft_atoi.c         ft_isprint.c      ft_memmove.c      ft_strchr.c       ft_strmapi.c      ft_toupper.c \
		ft_bzero.c        ft_itoa.c       ft_memset.c       ft_strdup.c       ft_strncmp.c \
		ft_calloc.c       ft_putchar_fd.c   ft_striteri.c     ft_strnstr.c \
		ft_isalnum.c      ft_putendl_fd.c   ft_strjoin.c      ft_strrchr.c \
		ft_isalpha.c      ft_memchr.c       ft_putnbr_fd.c    ft_strlcat.c      ft_strtrim.c \
		ft_isascii.c      ft_memcmp.c       ft_putstr_fd.c    ft_strlcpy.c      ft_substr.c \

OBJS := $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(NAME) $(OBJSB)
	ar -rcs $(NAME) $(OBJSB)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all