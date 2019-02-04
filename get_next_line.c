/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 07:49:53 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/04 19:56:39 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_correct_fd(int fd, t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(list, tmp);
	tmp = *list;
	return (tmp);
}

static void		read_line(t_list *list, char **line)
{
	int			len;

	len = ft_strlchr(list->content, '\n');
	if (len == -1)
		len = ft_strlen(list->content);
	*line = ft_strsub(list->content, 0, len);
	ft_memmove(list->content, list->content + len + 1,
		ft_strlen(list->content));
}

int				get_next_line(int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static t_list	*list;
	t_list			*tmp;
	int				ret;

	ret = read(fd, buf, BUFF_SIZE);
	if (ret < 0 || line == NULL)
		return (-1);
	tmp = get_correct_fd(fd, &list);
	while (ret)
	{
		buf[ret] = '\0';
		tmp->content = ft_strjoin(tmp->content, buf);
		if (ft_strchr(buf, '\n'))
			break ;
		ret = read(fd, buf, BUFF_SIZE);
	}
	list = tmp;
	if (ret == 0 && ft_strlen(list->content) == 0)
		return (0);
	read_line(list, line);
	return (1);
}

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int			main()
{
	char *line;

	int ja1 = open("ja1", O_RDONLY);
	int ja2 = open("ja2", O_RDONLY);
	int x = 0;
	char **ja1in = ft_memalloc(4);
	char **ja2in = malloc(4);
	while (x < 4)
	{
		get_next_line(ja1,ja1in);
		get_next_line(ja2,ja2in);
		ft_putstr(*ja1in);
		ft_putstr("\n");
		ft_putstr(*ja2in);
		ft_putstr("\n");
		x++;
	}
}
