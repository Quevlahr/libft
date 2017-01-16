# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 17:00:10 by quroulon          #+#    #+#              #
#    Updated: 2017/01/16 14:04:54 by quroulon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a

CC			= 	gcc

CFLAGS		= 	-Wall -Werror -Wextra -I $(INCDIR)

SRC			=	$(SRCLIBFT) $(SRCPRINTF)

OBJ			=	$(FT_CONV) $(FT_IS) $(FT_LST) $(FT_MATH) $(FT_MEM) $(FT_PUT) \
				$(FT_STR) $(GNL) $(FT_PRINTF)

SRC			= 	$(CONVSRC) $(ISSRC) $(LSTSRC) $(MATHSRC) $(MEMSRC) \
				$(PRINTSRC) $(PUTSRC) $(STRSRC) $(GNLSRC) $(PRINTFSRC)

INCDIR		=	includes
INCIS		=	$(INCDIR)/ft_chartools.h
INCCONV		=	$(INCDIR)/ft_conversion.h
INCPUT		=	$(INCDIR)/ft_display.h
INCLIST		=	$(INCDIR)/ft_list.h
INCMATH		=	$(INCDIR)/ft_math.h
INCMEM		=	$(INCDIR)/ft_memory.h
INCPRINTF	=	$(INCDIR)/ft_printf.h
INCSTR		=	$(INCDIR)/ft_stringtools.h
INCGNL		=	$(INCDIR)/get_next_line.h

INC			=	$(INCIS) $(INCCONV) $(INCPUT) $(INCLIST) $(INCMATH) $(INCMEM) \
				$(INCPRINTF) $(INCSTR) $(INCGNL)


_RED		=	\033[0;31m
_GREEN		=	\033[0;32m
_BLUE		=	\033[0;36m
_RESET		=	\033[0;m
_WHITE		=	\033[0;37m

################################################################################
#	LIBFT
################################################################################

CONVDIR		=	ft_conv
CONVNAME	=	ft_atoi.c ft_atoi_ll.c ft_atoibase.c ft_itoa.c ft_itoabase.c
CONVSRC		=	$(CONVNAME:%=$(CONVDIR)/%)
FT_CONV		=	$(CONVSRC:%.c=%.o)

ISDIR		=	ft_is
ISNAME		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_ishexa.c ft_isprint.c
ISSRC		=	$(ISNAME:%=$(ISDIR)/%)
FT_IS		=	$(ISSRC:%.c=%.o)

LSTDIR		=	ft_lst
LSTNAME		=	ft_lstadd.c ft_lstat.c ft_lstclear.c ft_lstcontentsize.c \
				ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
				ft_lstnew.c ft_lstprint.c ft_lstpush.c ft_lstrev.c \
				ft_lstsize.c ft_lsttochar.c ft_lstlen.c
LSTSRC		=	$(LSTNAME:%=$(LSTDIR)/%)
FT_LST		=	$(LSTSRC:%.c=%.o)

MATHDIR		=	ft_math
MATHNAME	=	ft_abs.c ft_tolower.c ft_toupper.c
MATHSRC		=	$(MATHNAME:%=$(MATHDIR)/%)
FT_MATH		=	$(MATHSRC:%.c=%.o)

MEMDIR		=	ft_mem
MEMNAME		=	ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
				ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c
MEMSRC		=	$(MEMNAME:%=$(MEMDIR)/%)
FT_MEM		=	$(MEMSRC:%.c=%.o)

PUTDIR		=	ft_put
PUTNAME		=	ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
				ft_putnbr.c ft_putnbr_fd.c ft_putnbrdl.c ft_putstr.c \
				ft_putstr_fd.c
PUTSRC		=	$(PUTNAME:%=$(PUTDIR)/%)
FT_PUT		=	$(PUTSRC:%.c=%.o)

STRDIR		=	ft_str
STRNAME		=	ft_bzero.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
				ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
				ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strmap.c \
				ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
				ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
				ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
				ft_nbrlen.c ft_strlen.c ft_linelen.c ft_dbstrdel.c
STRSRC		=	$(STRNAME:%=$(STRDIR)/%)
FT_STR		=	$(STRSRC:%.c=%.o)

GNLDIR		=	get_next_line
GNLNAME		=	get_next_line.c
GNLSRC		=	$(GNLNAME:%=$(GNLDIR)/%)
GNL			=	$(GNLSRC:%.c=%.o)

PRINTFDIR	=	ft_printf
PRINTFNAME	=	flags.c flags_application.c flags_application2.c ft_forstr.c \
				ft_gestion.c ft_init.c ft_printf.c ft_space.c ft_space_int.c \
				ft_space_str.c va_list.c va_list2.c va_list_octal.c \
				va_list_str.c libft_ull/ft_itoabase_uc.c libft_ull/ft_itoabase_ui.c \
				libft_ull/ft_itoabase_ull.c libft_ull/ft_itoabase_us.c \
				libft_ull/ft_nbrlen_l.c libft_ull/ft_nbrlen_ll.c \
				libft_ull/ft_nbrlen_ui.c libft_ull/ft_nbrlen_ul.c \
				libft_ull/ft_nbrlen_ull.c libft_ull/ft_putnbr_l.c \
				libft_ull/ft_putnbr_ll.c libft_ull/ft_putnbr_ui.c \
				libft_ull/ft_putnbr_ul.c libft_ull/ft_putnbr_ull.c \
				libft_ull/ft_wstrlen.c
PRINTFSRC	=	$(PRINTFNAME:%=$(PRINTFDIR)/%)
FT_PRINTF	=	$(PRINTFSRC:%.c=%.o)

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

$(FT_CONV): $(INCIS) $(INCSTR) $(INCMATH)

$(FT_PUT): $(INCSTR)

$(FT_LST): $(INCSTR) $(INCMEM)

$(FT_MEM): $(INCSTR)

$(FT_PRINTF): $(INCIS) $(INCCONV) $(INCLIST) $(INCSTR) $(INCPUT)

$(GNL): $(INCSTR)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)
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
	@ar t $(NAME)
