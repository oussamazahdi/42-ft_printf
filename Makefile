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

SRCS	=	./srcs/ft_putchar.c ./srcs/ft_putadr.c ./srcs/ft_putnbr_hex.c\
			./srcs/ft_putnbr_uns.c ./srcs/ft_putnbr.c ./srcs/ft_putstr.c ./srcs/ft_printf.c\

NAME	=	libftprintf.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS)
	
%.o		: %.c includes/ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -f $(OBJS)
 
fclean	:	clean
		rm -f $(NAME)

re		:	fclean all

