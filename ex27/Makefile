#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lravier <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/19 16:31:46 by lravier       #+#    #+#                  #
#    Updated: 2019/03/21 09:25:08 by lravier       ########   odam.nl          #
#                                                                              #
#******************************************************************************#

.PHONY = CLEAN ALL
NAME = ft_display_file
OSRCS = ft_display_file.o
CSRCS = ft_display_file.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(CSRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(OSRCS)

clean:
	rm -f *.o  *~

fclean: clean
	rm -f $(NAME)

re: fclean all