# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: twoerdem <twoerdem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/07 15:36:54 by twoerdem       #+#    #+#                 #
#    Updated: 2019/02/10 18:18:37 by twoerdem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = fillit

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clang -Wall -Wextra -Werror -I libft/includes -o ft_read_tetriminos.o -c ft_read_tetriminos.c
	clang -Wall -Wextra -Werror -I libft/includes -o ft_check_file.o -c ft_check_file.c
	clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
	clang -o $(NAME) main.o ft_read_tetriminos.o ft_check_file.o -I libft/includes -L libft/ -lft

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
