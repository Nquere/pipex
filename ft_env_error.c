/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:18 by nquere            #+#    #+#             */
/*   Updated: 2014/05/07 00:03:18 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "pipex.h"

void	ft_error_env(char **av)
{
	ft_putstr_fd(av[0], 2);
	ft_putstr_fd(" : env NULL.\n", 2);
	ft_putstr_fd("This program needs a correct environment to work.\n", 2);
	_exit(-1);
}

void	ft_error_path(char **av)
{
	ft_putstr_fd(av[0], 2);
	ft_putstr_fd(" : PATH not found in environment.\n", 2);
	ft_putstr_fd("This program needs a correct environment to work.\n", 2);
	_exit(-1);
}
