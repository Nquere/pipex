/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:18 by nquere            #+#    #+#             */
/*   Updated: 2014/05/07 00:03:18 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "pipex.h"

void	ft_execve(t_array *line, char **env, char **av)
{
	t_array	*path;
	t_array	*tmp;
	int		i;

	i = -1;
	path = ft_array_split(get_env("PATH=", env), ':');
	if (path->size == 0 || *(char **)array_get(path, 0) == '\0')
		ft_error_path(av);
	array_insert(path, ft_strsub(*(char **)array_get(path, 0),
		ft_strclen(*(char **)array_get(path, 0), '/'),
		ft_strlen(*(char **)array_get(path, 0))), 0);
	while (i++ < (int)path->size)
	{
		tmp = array_cpy(line);
		array_insert(path, ft_strjoin(*(char **)array_get(path, i), "/"), i);
		array_insert(tmp, ft_strjoin(*(char **)array_get(path, i),
			*(char **)array_get(tmp, 0)), 0);
		execve(*(char **)array_get(tmp, 0), line->tab, env);
		array_free(&tmp);
	}
}

char	*get_env(const char *name, char **env)
{
	int		i;
	size_t	size;

	i = 0;
	size = ft_strlen(name);
	while (env[i])
	{
		if (!ft_strncmp(env[i], name, size))
			return (env[i] + size + 1);
		i++;
	}
	return (NULL);
}
