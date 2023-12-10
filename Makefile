NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
AR := ar rc
RM := rm -rf
CFILES := ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
	ft_putp.c ft_putstr.c ft_putu.c ft_putx.c
OBJS := ${CFILES:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@
	${AR} ${NAME} $@

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
