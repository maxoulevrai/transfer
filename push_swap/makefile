NAME = push_swap
LIB = lib/libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD
RM = rm -rf
OBJS = ${SRCS:.c=.o}
SRCS = main.c \
       utils/linked_list_utils.c \
       utils/parsing_utils.c

all: ${NAME}

${NAME}: ${OBJS} ${LIB}
	@echo -e "\E[32m blablablablaaaa \E[0m"
	@echo -e "\E[32m Compiling $@ \E[0m"
	${CC} ${CFLAGS} -o $@ $^ ${LIB}
	@echo "Build complete"

%.o: %.c
	@echo "Compiling $<"
	${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "Cleaning object files"
	${RM} ${OBJS} ${OBJS:.o=.d}

fclean: clean
	@echo "Cleaning executable"
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

-include ${OBJS:.o=.d}