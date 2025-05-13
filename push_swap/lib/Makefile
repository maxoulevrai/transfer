NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD
AR = ar rcs
RM = rm -rf
SRCSDIR = srcs/
OBJS = ${SRCS:.c=.o}
OBJSALL = ${SRCS:.c=.o} ${BONUS:.c=.o}

SRCS = ${SRCSDIR}ft_isalpha.c \
			${SRCSDIR}ft_isdigit.c \
			${SRCSDIR}ft_isalnum.c \
			${SRCSDIR}ft_isascii.c \
			${SRCSDIR}ft_isprint.c \
			${SRCSDIR}ft_strlen.c \
			${SRCSDIR}ft_memset.c \
			${SRCSDIR}ft_bzero.c \
			${SRCSDIR}ft_memcpy.c \
			${SRCSDIR}ft_memmove.c \
			${SRCSDIR}ft_strlcpy.c \
			${SRCSDIR}ft_strlcat.c \
			${SRCSDIR}ft_toupper.c \
			${SRCSDIR}ft_tolower.c \
			${SRCSDIR}ft_strchr.c \
			${SRCSDIR}ft_strrchr.c \
			${SRCSDIR}ft_strncmp.c \
			${SRCSDIR}ft_memchr.c \
			${SRCSDIR}ft_memcmp.c \
			${SRCSDIR}ft_strnstr.c \
			${SRCSDIR}ft_atoi.c \
			${SRCSDIR}ft_calloc.c \
			${SRCSDIR}ft_strdup.c \
			${SRCSDIR}ft_substr.c \
			${SRCSDIR}ft_strjoin.c \
			${SRCSDIR}ft_strtrim.c \
			${SRCSDIR}ft_split.c \
			${SRCSDIR}ft_itoa.c \
			${SRCSDIR}ft_strmapi.c \
			${SRCSDIR}ft_striteri.c \
			${SRCSDIR}ft_putchar_fd.c \
			${SRCSDIR}ft_putstr_fd.c \
			${SRCSDIR}ft_putendl_fd.c \
			${SRCSDIR}ft_putnbr_fd.c

BONUS = ${SRCSDIR}ft_lstnew_bonus.c \
			${SRCSDIR}ft_lstadd_front_bonus.c \
			${SRCSDIR}ft_lstsize_bonus.c \
			${SRCSDIR}ft_lstlast_bonus.c \
			${SRCSDIR}ft_lstadd_back_bonus.c \
			${SRCSDIR}ft_lstdelone_bonus.c \
			${SRCSDIR}ft_lstclear_bonus.c \
			${SRCSDIR}ft_lstiter_bonus.c \
			${SRCSDIR}ft_lstmap_bonus.c \


all:		${NAME}

${NAME}:	${OBJS}
			${AR} $@ $^

bonus: ${OBJSALL}
			${AR} ${NAME} $(OBJSALL)

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@

clean:
			${RM} ${OBJSALL} ${OBJSALL:.o=.d}

fclean:	clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re bonus

-include $(OBJSALL:.o=.d)