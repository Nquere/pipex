/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:00 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:48:45 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*tmp;
	size_t	i;

	i = 0;
	tmp = (char*)malloc(sizeof(char) * size + 1);
	if (tmp == NULL)
		return (NULL);
	while (i <= size)
	{
		((unsigned char*)tmp)[i] = '\0';
		i = i + 1;
	}
	return (tmp);
}
