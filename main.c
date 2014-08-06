/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:18 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 16:52:29 by jalula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "pipex.h"

int		main(int ac, char **av, char **env)
{
	pid_t	pig;
	int		fd[3];
	int		pip[2];
	int		fd_pipe;

	(void)ac;
	if (!env[0])
		ft_error_env(av);
	if (ac != 5)
		ft_error_ac(ac);
	fd_pipe = pipe(pip);
	if (fd_pipe == -1)
		ft_error_pipe(av);
	pig = fork();
	if (pig == -1)
		ft_error_fork(av);
	if (!pig)
		child(fd, av, pip, env);
	else
		father(fd, av, pip, env);
	return (EXIT_SUCCESS);
}

void	child(int *fd, char **av, int *pip, char **env)
{
	t_array	*line;
	int		error;

	fd[1] = open(av[1], O_RDONLY);
	if (fd[1] == -1)
		ft_error_open1(av, 1);
	error = dup2(fd[1], 0);
	if (error == -1)
		ft_error_dup2(av);
	error = dup2(pip[1], 1);
	if (error == -1)
		ft_error_dup2(av);
	error = close(pip[0]);
	if (error == -1)
		ft_error_close(av, 0);
	error = close(fd[1]);
	if (error == -1)
		ft_error_close(av, 1);
	line = ft_array_split(av[2], ' ');
	ft_execve(line, env, av);
	ft_error_execve(av, 2);
	_exit(EXIT_SUCCESS);
}

void	father(int *fd, char **av, int *pip, char **env)
{
	t_array	*line;
	int		error;

	fd[2] = open(av[4], O_CREAT | O_TRUNC | O_RDWR, S_IRWXU);
	if (fd[2] == -1)
		ft_error_open2(av, 4);
	error = dup2(fd[2], 1);
	if (error == -1)
		ft_error_dup2(av);
	error = dup2(pip[0], 0);
	if (error == -1)
		ft_error_dup2(av);
	error = close(pip[1]);
	if (error == -1)
		ft_error_close(av, 0);
	error = close(fd[2]);
	if (error == -1)
		ft_error_close(av, 3);
	line = ft_array_split(av[3], ' ');
	ft_execve(line, env, av);
	ft_error_execve(av, 3);
	wait(NULL);
}
