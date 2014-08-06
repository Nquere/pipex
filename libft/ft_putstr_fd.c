/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:58 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:46:39 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int		a;

	a = 0;
	if (s == NULL)
		return ;
	while (s[a] != '\0')
	{
		ft_putchar_fd(s[a], fd);
		a = a + 1;
	}
}
