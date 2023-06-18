NAME=push_swap
NAMEB=checker
SRC = $(wildcard *.c)
SRCB = $(filter-out push-swap.c, $(SRC)) $(wildcard bonus/*.c)
CC = cc
OBJ=$(SRC:.c=.o)
OBJB=$(SRCB:.c=.o)
CFLAGS = -Wall -Werror -Wextra -g
HEADERS = push_swap.h ./bonus/get_next_line.h

all: $(NAME)

bonus: $(NAMEB)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

$(NAMEB) : $(OBJB)
	$(CC) $(CFLAGS) $(OBJB) -o $(NAMEB)

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJB)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(NAMEB)

re: fclean all

.PHONY : all clean fclean re bonus