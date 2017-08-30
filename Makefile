NAME=libft12k12
DYN=libft12dyn
CC=gcc
CFLAGS=-Iincludes -Wall -Wextra -Werror -fPIC
SRCS=$(wildcard srcs/*.c)
OBJS=$(patsubst srcs/%.c,objs/%.o,$(SRCS))

all: static dynamic

static: $(NAME).a

dynamic: $(DYN).so

$(NAME).a: $(OBJS)
	ar rcs $(NAME).a $(OBJS)

$(DYN).so: $(OBJS)
	gcc -shared -o $(DYN).so $(OBJS)

objs/%.o: srcs/%.c
	@mkdir -p objs
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME).a
	@rm -f $(DYN).so

re: fclean all
