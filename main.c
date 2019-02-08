/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 15:53:12 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/02/08 14:43:37 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*file;
	int		fd;

	file = ft_strnew(1);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		file = ft_read_tetriminos(fd, file);
		if (file == NULL)
			return (0);
//		ft_putendl(file);
		if (!(ft_check_file(file)))
		{
			ft_putendl("Error, invalid input!");
			return (0);
		}
	}
	return (0);
}