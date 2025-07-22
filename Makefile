NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

SRCS = 	ft_isalpha.c \

OBJS = ft_isalpha.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re