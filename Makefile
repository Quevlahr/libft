# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 17:00:10 by quroulon          #+#    #+#              #
#    Updated: 2016/09/12 10:44:23 by quroulon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a

CC			= 	gcc

CFLAGS		= 	-Wall -Werror -Wextra

SRC 		= 	ft_abs.c ft_atoi.c ft_atoi_ll.c ft_atoibase.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_ishexa.c ft_isprint.c ft_itoa.c ft_itoabase.c ft_linelen.c ft_lstadd.c ft_lstat.c ft_lstclear.c ft_lstcontentsize.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_lstprint.c ft_lstpush.c ft_lstrev.c ft_lstsize.c ft_lsttochar.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_nbrlen.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putnbrdl.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c get_next_line.c

SRCPRINTF	=	ft_printf/flags.c ft_printf/flags_application.c ft_printf/flags_application2.c ft_printf/ft_forstr.c ft_printf/ft_gestion.c ft_printf/ft_init.c ft_printf/ft_printf.c ft_printf/ft_space.c ft_printf/ft_space_int.c ft_printf/ft_space_str.c ft_printf/va_list.c ft_printf/va_list2.c ft_printf/va_list_octal.c ft_printf/va_list_str.c \
				ft_printf/libft_ull/ft_itoabase_uc.c ft_printf/libft_ull/ft_itoabase_ui.c ft_printf/libft_ull/ft_itoabase_ull.c ft_printf/libft_ull/ft_itoabase_us.c ft_printf/libft_ull/ft_nbrlen_l.c ft_printf/libft_ull/ft_nbrlen_ll.c ft_printf/libft_ull/ft_nbrlen_ui.c ft_printf/libft_ull/ft_nbrlen_ul.c ft_printf/libft_ull/ft_nbrlen_ull.c ft_printf/libft_ull/ft_putnbr_l.c ft_printf/libft_ull/ft_putnbr_ll.c ft_printf/libft_ull/ft_putnbr_ui.c ft_printf/libft_ull/ft_putnbr_ul.c ft_printf/libft_ull/ft_putnbr_ull.c ft_printf/libft_ull/ft_wstrlen.c

OBJ			=	$(SRC:.c=.o) \
				$(SRCPRINTF:.c=.o)
OBJ2		=	$(wildcard *gch)

HEADER 		= 	.

all: $(NAME)

.SILENT : $(NAME)
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -c -I $(HEADER) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

.SILENT : clean
clean:
	@rm -f $(OBJ) $(OBJ2)

.SILENT : fclean
fclean: clean
	@rm -f $(NAME)

re: fclean all
