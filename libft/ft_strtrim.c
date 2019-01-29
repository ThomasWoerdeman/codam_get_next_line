/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 15:05:11 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 15:05:12 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_right(char const *s)
{
	size_t	cnt;

	cnt = 0;
	while (s[cnt] == ' ' || s[cnt] == '\n' || s[cnt] == '\t')
		cnt++;
	return (cnt);
}

static size_t	count_left(char const *s)
{
	int		cnt;

	cnt = ft_strlen(s) - 1;
	while (s[cnt] == ' ' || s[cnt] == '\n' || s[cnt] == '\t')
		cnt--;
	return (cnt);
}

char			*ft_strtrim(char const *s)
{
	int		left;
	int		right;
	char	*ret;

	if (!s)
		return (NULL);
	right = count_right(s);
	left = count_left(s) - right + 1;
	ret = ft_strsub(s, right, left);
	if (left < right)
		return ("");
	if (ret == NULL)
		return (NULL);
	return (ret);
}
