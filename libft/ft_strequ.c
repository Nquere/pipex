/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:59 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:47:24 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		a;

	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (0);
		a = a + 1;
	}
	if (s1[a] == s2[a])
		return (1);
	return (0);
}
