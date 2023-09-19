NAME = push_swap.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I .
AR = ar rcs
RM = rm -f

SRCS =

SRCS_BONUS = 

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $^

.PHONY: all clean fclean re bonus