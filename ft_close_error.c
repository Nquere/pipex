/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalula <jalula@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 16:51:49 by jalula            #+#    #+#             */
/*   Updated: 2014/05/10 16:51:53 by jalula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "pipex.h"

void	ft_error_close(char **av, int ac)
{
	ft_putstr_fd(av[0], 2);
	ft_putstr_fd(" : close error.\n", 2);
	if (ac == 0)
		ft_putstr_fd("Can not close the pipe.\n", 2);
	if (ac == 1)
	{
		ft_putstr_fd("Don't have the right to close \"", 2);
		ft_putstr_fd(av[1], 2);
		ft_putstr_fd("\".\n", 2);
	}
	if (ac == 3)
	{
		ft_putstr_fd("Don't have the right to close \"", 2);
		ft_putstr_fd(av[3], 2);
		ft_putstr_fd("\".\n", 2);
	}
	_exit(EXIT_FAILURE);
}
