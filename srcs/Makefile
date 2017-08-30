CC = gcc
CFLAGS = -c -Werror -Wall -Wextra

SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
AOUT = prog
INC = -I../includes

all : $(AOUT) 

prog : $(OBJS)
	$(CC) -c -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $< 
clean :
	@rm *.o

cleaner : clean
	@rm $(AOUT)
