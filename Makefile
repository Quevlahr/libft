# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 17:00:10 by quroulon          #+#    #+#              #
#    Updated: 2017/01/14 20:20:49 by quroulon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a

CC			= 	gcc

CFLAGS		= 	-Wall -Werror -Wextra -g

SRC			=	$(SRCLIBFT) $(SRCPRINTF)

OBJ			=	$(OBJLIBFT) $(OBJPRINTF)

INC			=	$(INCLIBFT) $(INCPRINTF)
INCPRINTF	=	$(PRTDIR)/ft_printf.h
INCLIBFT	=	libft.h

_RED		=	\033[0;31m
_GREEN		=	\033[0;32m
_BLUE		=	\033[0;36m
_RESET		=	\033[0;m
_WHITE		=	\033[0;37m

################################################################################
#	LIBFT
################################################################################

SRCLIBFT	= 	$(FT_CONV) $(FT_DBSTR) $(FT_IS) $(FT_LEN) $(FT_LST) $(FT_MATH) \
				$(FT_MEM) $(FT_PRINTF) $(FT_PUT) $(FT_STR) $(GNL)

FT_CONV		=	ft_conv/ft_atoi.c ft_conv/ft_atoi_ll.c ft_conv/ft_atoibase.c \
				ft_conv/ft_itoa.c ft_conv/ft_itoabase.c

FT_DBSTR	=	ft_dbstr/ft_dbstrdel.c

FT_IS		=	ft_is/ft_isalnum.c ft_is/ft_isalpha.c ft_is/ft_isascii.c \
				ft_is/ft_isdigit.c ft_is/ft_ishexa.c ft_is/ft_isprint.c

FT_LEN		=	ft_len/ft_linelen.c ft_len/ft_lstlen.c ft_len/ft_nbrlen.c \
				ft_len/ft_strlen.c

FT_LST		=	ft_lst/ft_lstadd.c ft_lst/ft_lstat.c ft_lst/ft_lstclear.c \
				ft_lst/ft_lstcontentsize.c ft_lst/ft_lstdel.c \
				ft_lst/ft_lstdelone.c ft_lst/ft_lstiter.c ft_lst/ft_lstmap.c \
				ft_lst/ft_lstnew.c ft_lst/ft_lstprint.c ft_lst/ft_lstpush.c \
				ft_lst/ft_lstrev.c ft_lst/ft_lstsize.c ft_lst/ft_lsttochar.c

FT_MATH		=	ft_math/ft_abs.c ft_math/ft_tolower.c ft_math/ft_toupper.c

FT_MEM		=	ft_mem/ft_memalloc.c ft_mem/ft_memccpy.c ft_mem/ft_memchr.c \
				ft_mem/ft_memcmp.c ft_mem/ft_memcpy.c ft_mem/ft_memdel.c \
				ft_mem/ft_memmove.c ft_mem/ft_memset.c

FT_PUT		=	ft_put/ft_putchar.c ft_put/ft_putchar_fd.c ft_put/ft_putendl.c \
				ft_put/ft_putendl_fd.c ft_put/ft_putnbr.c ft_put/ft_putnbr_fd.c \
				ft_put/ft_putnbrdl.c ft_put/ft_putstr.c ft_put/ft_putstr_fd.c

FT_STR		=	ft_str/ft_bzero.c ft_str/ft_strcat.c ft_str/ft_strchr.c \
				ft_str/ft_strclr.c ft_str/ft_strcmp.c ft_str/ft_strcpy.c \
				ft_str/ft_strdel.c ft_str/ft_strdup.c ft_str/ft_strequ.c \
				ft_str/ft_striter.c ft_str/ft_striteri.c ft_str/ft_strjoin.c \
				ft_str/ft_strlcat.c ft_str/ft_strmap.c ft_str/ft_strmapi.c \
				ft_str/ft_strncat.c ft_str/ft_strncmp.c ft_str/ft_strncpy.c \
				ft_str/ft_strnequ.c ft_str/ft_strnew.c ft_str/ft_strnstr.c \
				ft_str/ft_strrchr.c ft_str/ft_strsplit.c ft_str/ft_strstr.c \
				ft_str/ft_strsub.c ft_str/ft_strtrim.c

SRCGNL		=	get_next_line/get_next_line.c

PRTDIR		=	ft_printf

SRCPRINTF	=	$(PRTDIR)/flags.c $(PRTDIR)/flags_application.c \
				$(PRTDIR)/flags_application2.c $(PRTDIR)/ft_forstr.c \
				$(PRTDIR)/ft_gestion.c $(PRTDIR)/ft_init.c $(PRTDIR)/ft_printf.c \
				$(PRTDIR)/ft_space.c $(PRTDIR)/ft_space_int.c \
				$(PRTDIR)/ft_space_str.c $(PRTDIR)/va_list.c $(PRTDIR)/va_list2.c \
				$(PRTDIR)/va_list_octal.c $(PRTDIR)/va_list_str.c \
				$(PRTDIR)/libft_ull/ft_itoabase_uc.c $(PRTDIR)/libft_ull/ft_itoabase_ui.c \
				$(PRTDIR)/libft_ull/ft_itoabase_ull.c $(PRTDIR)/libft_ull/ft_itoabase_us.c \
				$(PRTDIR)/libft_ull/ft_nbrlen_l.c $(PRTDIR)/libft_ull/ft_nbrlen_ll.c \
				$(PRTDIR)/libft_ull/ft_nbrlen_ui.c $(PRTDIR)/libft_ull/ft_nbrlen_ul.c \
				$(PRTDIR)/libft_ull/ft_nbrlen_ull.c $(PRTDIR)/libft_ull/ft_putnbr_l.c \
				$(PRTDIR)/libft_ull/ft_putnbr_ll.c $(PRTDIR)/libft_ull/ft_putnbr_ui.c \
				$(PRTDIR)/libft_ull/ft_putnbr_ul.c $(PRTDIR)/libft_ull/ft_putnbr_ull.c \
				$(PRTDIR)/libft_ull/ft_wstrlen.c

OBJLIBFT	=	$(SRCLIBFT:%.c=%.o)
OBJGNL		=	$(SRCGNL:%.c=%.o)
OBJPRINTF	=	$(SRCPRINTF:%.c=%.o)

################################################################################
#	RULES
################################################################################

.PHONY: all clean flcean re

all:
	@$(MAKE) $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $@
	@echo "$(_GREEN)Creation of exe $@$(_RESET)"

$(OBJLIBFT): $(INCLIBFT)

$(OBJGNL): $(INCLIBFT)

$(OBJPRINTF): $(INCPRINTF) $(INCLIBFT)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS) -I .
	@echo "Compilation of $<"

clean:
	@rm -f $(OBJ)
	@echo "$(_RED)Vm : Deleted Obj files$(_RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(_RED)$(NAME) Deleted$(_RESET)"

re: fclean
	@$(MAKE) all

list:
	@ar t $@
