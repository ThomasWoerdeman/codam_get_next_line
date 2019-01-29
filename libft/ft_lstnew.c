/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 17:17:21 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/19 17:17:22 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	if (ret == NULL)
		return (NULL);
	if (content == NULL)
		ret->content = NULL;
	else
	{
		ret->content = malloc(sizeof(content_size));
		ret->content_size = content_size;
		ft_memcpy(ret->content, content, content_size);
	}
	ret->next = NULL;
	return (ret);
}
