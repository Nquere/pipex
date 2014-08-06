/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalula <jalula@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 16:50:07 by jalula            #+#    #+#             */
/*   Updated: 2014/05/10 16:50:14 by jalula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "pipex.h"

void	ft_error_open1(char **av, int ac)
{
	ft_putstr_fd("Don't have the right to open / read on \"", 2);
	ft_putstr_fd(av[ac], 2);
	ft_putstr_fd("\".\n", 2);
	ft_putstr_fd("The file ", 2);
	ft_putstr_fd("\"", 2);
	ft_putstr_fd(av[ac], 2);
	ft_putstr_fd("\" may not exist.\n", 2);
	_exit(EXIT_FAILURE);
}

void	ft_error_open2(char **av, int ac)
{
	ft_putstr_fd("Don't have the right to open / write on \"", 2);
	ft_putstr_fd(av[ac], 2);
	ft_putstr_fd("\".\n", 2);
	ft_putstr_fd("The file ", 2);
	ft_putstr_fd("\"", 2);
	ft_putstr_fd(av[ac], 2);
	ft_putstr_fd("\" may not exist.\n", 2);
	_exit(EXIT_FAILURE);
}

void	ft_error_pipe(char **av)
{
	ft_putstr_fd(av[0], 2);
	ft_putstr_fd(" : pipe error.", 2);
	ft_putstr_fd(" Mission abroved.\n", 2);
	ft_putstr_fd("Please turn off the light before leaving the room.\n", 2);
	_exit(EXIT_FAILURE);
}

void	ft_error_ac(int ac)
{
	if (ac < 2)
		ft_putstr_fd("Not a single argument...\n", 2);
	else if (ac == 2)
	{
		ft_putstr_fd("Only ", 2);
		ft_putnbr_fd(ac - 1, 2);
		ft_putstr_fd(" argument.\n", 2);
	}
	else if (ac > 5)
		ft_putstr_fd("Too much arguments.\n", 2);
	else
	{
		ft_putstr_fd("Only ", 2);
		ft_putnbr_fd(ac - 1, 2);
		ft_putstr_fd(" arguments.\n", 2);
	}
	ft_putstr_fd("Correct use :  ./pipex file1 cmd1 cmd2 file2\n", 2);
	_exit(EXIT_FAILURE);
}

void	ft_error_execve(char **av, int ac)
{
	ft_putstr_fd(av[0], 2);
	ft_putstr_fd(" : Commande not found : ", 2);
	ft_putstr_fd(av[ac], 2);
	ft_putstr_fd("\n", 2);
	_exit(EXIT_FAILURE);
}
