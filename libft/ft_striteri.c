/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 12:42:22 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 12:42:23 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	cnt;

	cnt = 0;
	if (s)
	{
		while (s[cnt])
		{
			f(cnt, s + cnt);
			cnt++;
		}
	}
}
