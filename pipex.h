/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:30 by nquere            #+#    #+#             */
/*   Updated: 2014/05/07 00:03:30 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include "libft/libft.h"

void	ft_execve(t_array *line, char **env, char **av);
char	*get_env(const char *name, char **environ);
int		ft_size_of_line(char *line);
void	child(int *fd, char **av, int *pip, char **env);
void	father(int *fd, char **av, int *pip, char **env);
void	ft_error_open1(char **av, int ac);
void	ft_error_open2(char **av, int ac);
void	ft_error_close(char **av, int ac);
void	ft_error_pipe(char **av);
void	ft_error_fork(char **av);
void	ft_error_dup2(char **av);
void	ft_error_path(char **av);
void	ft_error_ac(int ac);
void	ft_error_execve(char **av, int ac);
void	ft_error_env(char **av);

#endif
