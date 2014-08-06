/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fork_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalula <jalula@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 16:51:15 by jalula            #+#    #+#             */
/*   Updated: 2014/05/10 16:51:16 by jalula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "pipex.h"

void	ft_error_fork(char **av)
{
	ft_putstr_fd(av[0], 2);
	ft_putstr_fd(" : fork error.", 2);
	ft_putstr_fd(" Program abroved.\n", 2);
	_exit(-1);
}
