NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD
AR = ar rcs
RM = rm -rf
SRCDIR = utils/
OBJS = ${SRCS:.c=.o}

SRCS = ft_printf.c \
		${SRCDIR}ft_putaddyf.c \
		${SRCDIR}ft_putcharf.c \
		${SRCDIR}ft_putnbr_basef.c \
		${SRCDIR}ft_putnbrf.c \
		utils/ft_putstrf.c \

all:		${NAME}

${NAME}:	${OBJS}
			${AR} $@ $^

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@

clean:
			${RM} ${OBJS} ${OBJS:.o=.d}

fclean:	clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re

-include $(OBJS:.o=.d)