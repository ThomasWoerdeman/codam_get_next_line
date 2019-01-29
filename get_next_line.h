/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 07:50:09 by twoerdem       #+#    #+#                */
/*   Updated: 2019/01/29 18:52:10 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 69
#include <fcntl.h>
#include <unistd.h>
#include "./libft/libft.h"

int						get_next_line(const int fd, char **line);

#endif
