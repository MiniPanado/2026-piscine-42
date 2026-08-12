PROGRAM = ft_hexdump

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS_PROGRAM = main
SRCS = $(addsuffix .c, $(SRCS_PROGRAM))

OBJS = $(SRCS:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(PROGRAM)

.PHONY: all clean fclean
