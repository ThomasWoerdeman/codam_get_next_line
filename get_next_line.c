/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 07:49:53 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/02 18:16:04 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		create_line(int fd, char **list, char **line)
{
	int			len;
	char		*tmp;

	len = 0;
	if (list[fd][len] == '\0')
		return (0);
	while (list[fd][len] != '\n' && list[fd][len] != '\0')
		len++;
	*line = ft_strsub(list[fd], 0, len);
	tmp = ft_strdup(list[fd] + len + 1);
	free(list[fd]);
	list[fd] = tmp;
	return (1);
}

int				get_next_line(int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*list[999];
	char		*tmp;
	int			ret;

	if (fd < 0)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		if (list[fd] == NULL)
			list[fd] = ft_strnew(0);
		buf[ret] = '\0';
		tmp = ft_strjoin(list[fd], buf);
		free(list[fd]);
		list[fd] = tmp;
		if (ft_strchr(list[fd], '\n'))
			break ;
	}
	return (create_line(fd, list, line));
}
