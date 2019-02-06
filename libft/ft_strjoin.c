/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 14:14:04 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/05 15:29:03 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	c1;
	size_t	c2;
	char	*ret;

	c1 = ft_strlen(s1);
	c2 = ft_strlen(s2);
	ret = ft_strnew(c1 + c2);
	if (ret != NULL)
	{
		ft_strcpy(ret, s1);
		ft_strcpy(ret + c1, s2);
	}
	return (ret);
}
