/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:57 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:46:14 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putendl(char const *s)
{
	int		a;

	a = 0;
	if (s == NULL)
		return ;
	while (s[a] != '\0')
	{
		ft_putchar(s[a]);
		a = a + 1;
	}
	ft_putchar('\n');
}
