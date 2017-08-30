NAME=libft12k12
CC=gcc
CFLAGS=-Iincludes -Wall -Wextra -Werror -fPIC
SRCS=$(wildcard srcs/*.c)
OBJS=$(patsubst srcs/%.c,objs/%.o,$(SRCS))

all: static dynamic

static: $(NAME).a

dynamic: $(NAME).so

$(NAME).a: $(OBJS)
	ar rcs $(NAME).a $(OBJS)

$(NAME).so: $(OBJS)
	gcc -shared -o $(NAME).so $(OBJS)

objs/%.o: srcs/%.c
	@mkdir -p objs
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME).a
	@rm -f $(NAME).so

re: fclean all
