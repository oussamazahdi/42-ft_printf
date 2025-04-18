# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 08:57:33 by ozahdi            #+#    #+#              #
#    Updated: 2023/12/11 17:20:59 by ozahdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_putchar.c ft_putadr.c ft_putnbr_hex.c ft_putnbr_uns.c ft_putnbr.c ft_putstr.c ft_printf.c\

NAME	=	libftprintf.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS)
	
%.o		: %.c ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -f $(OBJS)
 
fclean	:	clean
		rm -f $(NAME)

re		:	fclean all

