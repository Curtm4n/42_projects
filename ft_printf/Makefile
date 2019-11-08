# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 14:56:48 by cdapurif          #+#    #+#              #
#    Updated: 2019/11/08 15:04:01 by cdapurif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS	=	filename

OBJS	=	${SRCS:.c=.o}

NAME	=	libftprintf.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

${NAME} :	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all		: 	${NAME}
