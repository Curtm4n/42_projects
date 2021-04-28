# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/02 11:17:11 by cdapurif          #+#    #+#              #
#    Updated: 2020/03/02 17:19:18 by cdapurif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	test.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	Cub3D

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

FW		=	-framework OpenGL -framework AppKit

RM		=	rm -f

LIB		=	libft/libft.a

MLX		=	minilibx/libmlx.a

$(NAME)	:	$(OBJS)
				$(MAKE) -C libft/
				$(CC) $(CFLAGS) $(FW) $(OBJS) $(LIB) $(MLX) -o $(NAME)

all		:	$(NAME)

clean	:
				@$(RM) libft/*.o
				@$(RM) $(OBJS)

fclean	:	clean
				@$(RM) libft/*.a
				@$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
