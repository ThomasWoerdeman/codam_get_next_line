/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 16:58:05 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/05 15:36:01 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp;
	const char	*stmp;

	tmp = dst;
	stmp = src;
	if (stmp < tmp)
		while (len)
		{
			len--;
			*(tmp + len) = *(stmp + len);
		}
	else
		while (len)
		{
			len--;
			*tmp++ = *stmp++;
		}
	return (dst);
}
