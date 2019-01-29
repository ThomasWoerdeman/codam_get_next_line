/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 13:39:26 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 13:39:27 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	cnt;
	char	*ret;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	cnt = 0;
	while (cnt < len && s[cnt + start] != '\0')
	{
		ret[cnt] = s[cnt + start];
		cnt++;
	}
	ret[cnt] = '\0';
	return (ret);
}
