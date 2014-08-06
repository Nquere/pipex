/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:59 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:48:17 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*news;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i = i + 1;
	news = (char*)malloc(sizeof(char) * i + 1);
	if (news == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		news[i] = f(i, s[i]);
		i = i + 1;
	}
	news[i] = '\0';
	return (news);
}
