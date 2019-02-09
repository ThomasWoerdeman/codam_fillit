/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_file.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/08 13:26:44 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/02/09 18:53:25 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_file(char *file)
{
	int		end;
	int		i;
	int		stop;
	int		hashtag;
	int		nline;

	i = 0;
	stop = 0;
	hashtag = 0;
	nline = 0;
	end = 20;
	while (i < end)
	{
		if (file[i] == '.')
			stop++;
		if (file[i] == '#')
			hashtag++;
		if (file[i] == '\n')
			nline++;
		i++;
		if (i == end && stop != 12 || hashtag != 4 || nline != 4)
			return (0);
		if (i == end && (file[i + 1] == '.' || file[i + 1] == '#'))
		{
			stop = 0;
			hashtag = 0;
			nline = 0;
			end = end + 20;
			i++;
		}
	}
	if (file[i] == '\0')
		return (1);
}
