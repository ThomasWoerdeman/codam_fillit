/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 15:36:50 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/08 13:24:13 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 42
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"

char	*ft_read_tetriminos(int fd, char *file);

#endif