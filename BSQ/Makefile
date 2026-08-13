PROGRAM = bsq

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_NAME = algorithm main output read_input utils parsing validation memory
SRCS = $(addsuffix .c, $(SRCS_NAME))

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJS): bsq.h

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re