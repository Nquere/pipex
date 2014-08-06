/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup2_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:18 by nquere            #+#    #+#             */
/*   Updated: 2014/05/07 00:03:18 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "pipex.h"

void	ft_error_dup2(char **av)
{
	ft_putstr_fd(av[0], 2);
	ft_putstr_fd(" : dup2 error.", 2);
	ft_putstr_fd(" Program abroved.\n", 2);
	ft_putstr_fd("Everything is possible. Just believe in you\n", 2);
	_exit(-1);
}
