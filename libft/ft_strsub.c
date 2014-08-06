/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:01 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:49:28 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (s == NULL)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	while (j < len)
	{
		tmp[j] = s[i];
		i = i + 1;
		j = j + 1;
	}
	tmp[j] = '\0';
	return (tmp);
}
