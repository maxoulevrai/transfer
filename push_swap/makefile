NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD
RM = rm -rf
SRCSDIR = srcs/
OBJS = ${SRCS:.c=.o}

SRCS = ${SRCSDIR}ft_isalpha.c \
			${SRCSDIR}ft_isdigit.c \



all:		${NAME}

${NAME}:	${OBJS}
			${CC} $@ $^

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@

clean:
			${RM} ${OBJSALL} ${OBJSALL:.o=.d}

fclean:	clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re bonus

-include $(OBJSALL:.o=.d)