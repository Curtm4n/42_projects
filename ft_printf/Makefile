# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 14:56:48 by cdapurif          #+#    #+#              #
#    Updated: 2019/11/20 19:51:41 by cdapurif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c \
			ft_printf_parser.c \
			ft_printf_utils.c \
			ft_printf_utils2.c \
			print_char.c \
			print_string.c \
			print_addr.c \
			main.c #remove main from sources

OBJS	=	${SRCS:.c=.o}

NAME	=	libftprintf.a #must be a library not an executable

CC		=	gcc

CFLAGS	=	-g3 -fsanitize=address

${NAME} :	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all		: 	${NAME}

clean	:
			@${RM} ${OBJS}

fclean	:	clean
			@${RM} ${NAME}

re		:	fclean all

.PHONY	:	all bonus clean fclean re
