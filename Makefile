# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 17:43:22 by rgareti-          #+#    #+#              #
#    Updated: 2025/07/28 21:46:32 by rgareti-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

SRCS = 			\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strlen.c	\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_strlcat.c\
	ft_strnstr.c\
	ft_strlcpy.c\
	ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strdup.c\
	ft_memcpy.c\
	*ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re