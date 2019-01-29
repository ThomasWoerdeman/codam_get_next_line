/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cntwords.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/22 16:47:36 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/22 16:47:39 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cntwords(char *s, char c)
{
	int		cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			cnt++;
		}
		s++;
	}
	return (cnt);
}
