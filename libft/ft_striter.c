/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 11:11:21 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 11:11:21 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int	cnt;

	cnt = 0;
	if (s)
	{
		while (s[cnt] != '\0')
		{
			f(&s[cnt]);
			cnt++;
		}
	}
}
