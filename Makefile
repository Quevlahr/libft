# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quroulon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 17:00:10 by quroulon          #+#    #+#              #
#    Updated: 2016/03/15 20:15:30 by quroulon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a

CC			= 	gcc

CFLAGS		= 	-Wall -Werror -Wextra

SRC 		= 	$(wildcard *.c)

OBJ			=	$(SRC:.c=.o)

HEADER 		= 	.

all: $(NAME)

.SILENT : $(NAME)
$(NAME):
	@$(CC) $(CFLAGS) -c -I $(HEADER) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

.SILENT : clean
clean:
	@rm -f $(OBJ)

.SILENT : fclean
fclean: clean
	@rm -f $(NAME)

re: fclean all
