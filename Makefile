##
## EPITECH PROJECT, 2020
## my_printf
## File description:
## only makefile
##

LIB_NAME=	libmy.a

LIB_PATH=	lib/my/src/

LIB_SRC	=	my_putchar.c			\
			my_put_nbr.c			\
			my_putstr.c				\
			my_strdup.c				\
			my_arraylen.c			\
			my_strlen.c 			\
			my_fill_fn_array.c 		\
			my_flagcmp.c			\
			my_printf.c 			\
			my_va_putchar.c			\
			my_va_putstr.c 			\
			my_va_put_nbr.c 		\
			my_put_bin_base.c	 	\
			my_va_put_bin_base.c 	\
			my_put_nonp_in_oct.c 	\
			my_va_put_nonp_in_oct.c \
			my_put_uint_octa.c		\
			my_va_put_uint_octa.c 	\
			my_put_unbr.c 			\
			my_va_put_unbr.c 		\
			my_put_uint_hexa.c 		\
			my_va_put_uint_hexa.c   \
			my_put_uint_hexaup.c 	\
			my_va_put_uint_hexaup.c \
			my_revstr.c 			\

LIB_SRCS =	$(addprefix $(LIB_PATH), $(LIB_SRC))

LIB_OBJS=	$(LIB_SRCS:.c=.o)

RM		=	rm -f

DEV_NAME=	my_printf

DEV_PATH=	src/

DEV_SRC	=	main.c	 				\

DEV_SRCS=	$(addprefix $(DEV_PATH), $(DEV_SRC))

DEV_OBJS=	$(DEV_SRCS:.c=.o)

CFLAGS	+=	-I./include -I./lib/my/include -W -Wall -Werror -g3
LDFLAGS	+=	-L./lib
LDLIBS	+=	 -lmy

GCC		=	gcc

all:		$(LIB_NAME)

$(LIB_NAME):	$(LIB_OBJS)
	ar rc $(LIB_NAME) $(LIB_OBJS)
	cp $(LIB_NAME) lib/

clean:
	$(RM) $(LIB_OBJS)

fclean: clean
	$(RM) $(LIB_NAME)
	$(RM) lib/$(LIB_NAME)

re: 	fclean all

dev:		$(DEV_NAME)

$(DEV_NAME):	$(DEV_OBJS)
	make -C .
	$(GCC) -o $(DEV_NAME) $(DEV_OBJS) $(LDFLAGS) $(LDLIBS)

clean_dev:
	$(RM) $(DEV_OBJS)

fclean_dev: clean_dev
	$(RM) $(DEV_NAME)

re_dev: fclean_dev dev

re_re: re re_dev

clear: fclean fclean_dev