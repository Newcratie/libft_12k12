NAME=libft12k12.a
CC=gcc
CFLAGS=-Iincludes -Wall -Wextra -Werror
SRCS=$(wildcard srcs/*.c)
OBJS=$(patsubst srcs/%.c,objs/%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

objs/%.o: srcs/%.c
	@mkdir -p objs
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME)

re: fclean all
