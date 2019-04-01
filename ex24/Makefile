#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lravier <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/19 16:31:46 by lravier       #+#    #+#                  #
#    Updated: 2019/03/19 19:06:32 by lravier       ########   odam.nl          #
#                                                                              #
#******************************************************************************#

.PHONY = CLEAN ALL
NAME = libft.a
RAWFILES := putchar putstr 
OSRCS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CSRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
CC = gcc
HEADER = includes
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OSRCS)
	$(CC) $(CFLAGS) -c $(CSRCS) -I $(HEADER)
	ar rcs $(NAME) $(OSRCS)

%.o: srcs/%.c
	$(CC) $(CFLAGS) -o $@  -c $<

clean:
	rm -f *.o  *~

fclean: clean
	rm -f *.a

re: fclean all