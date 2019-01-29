/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 07:49:53 by twoerdem       #+#    #+#                */
/*   Updated: 2019/01/29 17:57:54 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		create_line(int fd, int ret, char **list, char **line)
{

}

int				get_next_line(int fd, char **line)
{
	char		buf[BUF_SIZE + 1];
	static char	*list[999];
	char		*tmp;
	int			ret;

	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		if (list[fd] == NULL)
			list[fd] = ft_strnew(1);
		buf[ret] = '\0';
		tmp = ft_strjoin(list[fd], buf);
		free(list[fd]);
		list[fd] = tmp;
		if (ft_strchr(list[fd], '\n') > 0)
			break;
	}
	return (0);
}

int				main(int ac, char **av)
{
	int		fd;
	char	*line;

	if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		get_next_line(fd, &line);
	}
}

