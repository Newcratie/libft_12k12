# **************************************************************************** #
#                                                                              #
#                                                   _ ____        _ ____       #
#    Makefile                                      /  (___\      /  (___\      #
#                                                  - | __) )_  __- | __) )     #
#    By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/      #
#                                                  | | |___|   < | | |___      #
#    Created: 2017/08/30 17:07:00 by Karim         |_|_____)_|\_\|_|_____)     #
#    Updated: 2017/08/30 17:07:04 by Karim                                     #
#                                                                              #
# **************************************************************************** #

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
