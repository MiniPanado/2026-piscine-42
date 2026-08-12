PROGRAM = do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_NAME = ft_putnbr ft_atoi ft_putstr ft_operations main ft_do_op
SRCS = $(addsuffix .c, $(SRCS_NAME))

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c  -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re
