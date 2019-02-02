/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 07:50:09 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/02 18:16:40 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 80
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"

int						get_next_line(const int fd, char **line);

#endif
