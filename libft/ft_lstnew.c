/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 17:17:21 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/05 16:49:00 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ret;

	ret = (t_list *)ft_memalloc(sizeof(t_list));
	if (ret == NULL)
		return (NULL);
	if (content == NULL)
	{
		ret->content_size = 0;
		ret->content = NULL;
	}
	else
	{
		ret->content_size = content_size;
		ret->content = ft_memalloc(content_size);
		if (ret->content == NULL)
			return (NULL);
		ft_memcpy(ret->content, content, content_size);
	}
	ret->next = NULL;
	return (ret);
}
