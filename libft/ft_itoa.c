/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:56 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:44:59 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = n;
	str = (char*)malloc(sizeof(char) * i);
	if (str == NULL)
		return (NULL);
	str[0] = 0;
	return (str);
}
