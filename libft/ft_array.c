/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:55 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 16:16:32 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_array	*array_new(size_t capacity, size_t size_change, size_t size_type,
						t_flags flags)
{
	t_array	*res;

	res = (t_array *)malloc(sizeof(t_array));
	if (!res)
		return (ft_error(flags));
	res->size = 0;
	res->capacity = capacity;
	res->size_change = size_change;
	res->size_type = size_type;
	res->it = 0;
	res->flags = flags;
	res->err_func = &ft_error;
	res->tab = (char *)malloc(size_change * capacity);
	if (!res->tab)
		return (ft_error(flags));
	if (flags & 1)
		ft_bzero(res->tab, size_change * capacity);
	return (res);
}

t_array	*array_add(t_array *arr, void *value)
{
	if (arr->capacity == arr->size)
		array_resize(arr, BUFF_SIZE);
	if (arr->flags & PTR)
		ft_memcpy((arr->tab + (arr->size * arr->size_type)),
				&value, arr->size_type);
	else
		ft_memcpy((arr->tab + (arr->size * arr->size_type)),
				value, arr->size_type);
	arr->size++;
	return (arr);
}

t_array	*array_insert(t_array *arr, void *value, unsigned int index)
{
	while (arr->capacity < index)
		array_resize(arr, FALSE);
	if (index + 1 >= arr->size)
		arr->size = index;
	if (arr->flags & PTR)
		ft_memcpy((arr->tab + (index * arr->size_type)), &value,
					arr->size_type);
	else
		ft_memcpy((arr->tab + (index * arr->size_type)), value, arr->size_type);
	return (arr);
}

t_array	*array_resize(t_array *arr, t_bool auto_resize)
{
	void	*tab;

	(void)auto_resize;
	arr->capacity += arr->size_change;
	tab = (char*)malloc(arr->size_type * arr->capacity);
	if (!tab)
		return (arr->err_func(arr->flags));
	if (arr->flags & 1)
		ft_bzero(tab, arr->size_type * arr->capacity);
	ft_memcpy(tab, arr->tab, arr->size * arr->size_type);
	free(arr->tab);
	arr->tab = tab;
	return (arr);
}

void	array_free(t_array **arr)
{
	free((*arr)->tab);
	free(*arr);
	*arr = NULL;
}
