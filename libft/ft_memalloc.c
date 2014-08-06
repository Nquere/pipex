/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:56 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:45:06 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*temp;
	size_t	i;

	i = 0;
	temp = (char*)malloc(sizeof(char) * size);
	if ((unsigned char*)temp == NULL)
		return (NULL);
	while (i < size)
	{
		((unsigned char*)temp)[i] = 0;
		i = i + 1;
	}
	return (temp);
}
