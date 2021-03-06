# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 16:17:46 by cmieuzet          #+#    #+#              #
#    Updated: 2022/07/05 18:04:24 by cmieuzet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
LIBFT	= Libft_cursus/libft.a

CFLAGS	= -Wall -Wextra -Werror -I libft/includes

CC	= @gcc

SRCS	=	push_swap.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -s -C libft/
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@$(MAKE) -s -C libft clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -s -C libft fclean

re: fclean all

.PHONY: all clean fclean re
