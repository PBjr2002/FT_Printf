# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 17:24:19 by pauberna          #+#    #+#              #
#    Updated: 2023/10/17 16:37:23 by pauberna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_put_hexlow.c ft_put_hexup.c ft_put_ptr.c\
		ft_put_unint.c ft_putchar.c ft_putnbr.c ft_putstr.c

LIBFTPATH = ./libft_printf/libft.a

LIBFTDIR = ./libft_printf

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFTPATH) $(OBJS)
			cp $(LIBFTPATH) $(NAME)
			ar rcs $(NAME) $(OBJS)

$(LIBFTPATH):	$(LIBFTDIR)
			@$(MAKE) -C $(LIBFTDIR)

clean:
			@$(MAKE) clean -C $(LIBFTDIR)
			rm -rf $(OBJS)

fclean: clean
			@$(MAKE) fclean -C $(LIBFTDIR)
			rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
