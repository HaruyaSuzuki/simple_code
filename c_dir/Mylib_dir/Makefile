# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/20 00:56:13 by hasuzuki          #+#    #+#              #
#    Updated: 2021/02/20 14:41:42 by hasuzuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mylib.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = ./includes/
SRCS_PATH = srcs/
SUCCESS = @echo "mylib ready to use!"

SRCS = $(SRCS_PATH)ft_getchar.c \
	$(SRCS_PATH)ft_putchar.c

OBJS = $(SRCS:.c=.o)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $@ $<
	ranlib $@
	$(SUCCESS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean