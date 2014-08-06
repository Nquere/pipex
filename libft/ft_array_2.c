/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:55 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 16:12:43 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*array_get(t_array *arr, unsigned int index)
{
	return (arr->tab + (arr->size_type * index));
}

void	*array_next(t_array *arr)
{
	if (arr->flags & LOOP && arr->it >= arr->size)
		arr->it = 0;
	if (arr->it < arr->size)
	{
		arr->it++;
		return (arr->tab + (arr->size_type * (arr->it - 1)));
	}
	return (NULL);
}

t_array	*array_cpy(const t_array *src)
{
	t_array	*res;

	res = array_new(src->capacity, src->size_change, src->size_type,
					src->flags);
	if (!res)
		return (NULL);
	res->err_func = src->err_func;
	res->size = src->size;
	ft_memcpy(res->tab, src->tab, src->size * src->size_change);
	return (res);
}

t_array	*array_remove(t_array *arr, unsigned int index)
{
	arr->size--;
	ft_memmove(arr->tab + index * arr->size_type,
				arr->tab + (index + 1) * arr->size_type,
				arr->size_type * arr->size);
	if (arr->flags & 1)
		ft_bzero(arr->tab + (arr->size_type * arr->size), arr->size_type);
	return (arr);
}
