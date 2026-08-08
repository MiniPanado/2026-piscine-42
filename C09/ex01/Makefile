CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC_DIR = srcs
SRCS = $(addprefix $(SRC_DIR)/, ft_putchar.c ft_swap.c \
	   ft_putstr.c ft_strlen.c ft_strcmp.c)

OBJ = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)
