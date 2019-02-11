/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_file.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/08 13:26:44 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/02/11 14:51:13 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_charcount(char *p, char c, int len)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (i < len)
	{
		if (p[i] == c)
			x++;
		i++;
	}
	return (x);
}

int		ft_basic_check(char *p)
{
	if (ft_charcount(p, '.', 20) != 12)
		return (0);
	if (ft_charcount(p, '#', 20) != 4)
		return (0);
	if (ft_charcount(p, '\n', 20) != 4)
		return (0);
	return (1);
}

int		ft_check_file(char *file)
{
	char	*p;

	p = file;
	if (ft_basic_check(p) == 0)
		return (0);
	if (ft_strlen(p) > 21)
	{
		p = ft_strstr(file, "\n\n");
		p = p + 2;
		ft_check_file(p);
	}
	return (1);
}
