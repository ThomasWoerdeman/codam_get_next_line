/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 13:39:26 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/05 15:34:13 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = ft_strnew(len);
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	while (i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	return (ret);
}
