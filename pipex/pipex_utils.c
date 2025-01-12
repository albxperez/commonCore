/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:59:44 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/12 12:16:01 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*find_cmd_path(char *cmd_arg, char *path_divided[])
{
	char	*path_slash;
	char	*cmd_path;
	int		i;

	i = 0;
	while (path_divided[i] != NULL)
	{
		path_slash = ft_strjoin(path_divided[i], "/");
		cmd_path = ft_strjoin(path_slash, cmd_arg);
		free(path_slash);
		// verificar si el ejecutable existe y tiene permisos de ejecucion
		if (access(cmd_path, X_OK) == 0)
			return (cmd_path);
		free(cmd_path);
		i++;
	}
	return (NULL);
}

char	*get_path(char *cmd_arg, char **envp)
{
	char	**path_divided;
	char	*cmd_path;

	if (envp == NULL || *envp == NULL)
	{
		perror("There is no PATH defined\n");
		exit(1);
	}
	while (*envp != NULL)
	{
		if (ft_strncmp(*envp, "PATH=", 5) == 0)
		{
			break;
		}
		envp++;
	}
	path_divided = ft_split(*envp + 5, ':');
	if (!path_divided)
	{
		perror("path_divided vacio");
		exit(1);
	}
	cmd_path = find_cmd_path(cmd_arg, path_divided);
	free_double_pointer(path_divided);
	return (cmd_path);
}

void	execute_cmd(char *cmd, char *envp[])
{
	char	**cmd_arg;
	char	*cmd_path;

	// char	**path_divided;
	cmd_arg = ft_split(cmd, ' ');
	if (!cmd_arg || !cmd_arg[0])
	{
		perror("Permiso denegado.");
		exit(1);
	}
	cmd_path = get_path(*cmd_arg, envp);
	// path_divided = get_path(cmd_arg,envp);
	// cmd_path = find_cmd_path(cmd_arg, *path_divided);
	if (!cmd_path)
	{
		perror("Comando no encontrado.");
		free_double_pointer(cmd_arg);
		exit(1);
	}
	execve(cmd_path, cmd_arg, envp);
	// si falla la ejecucion
	perror("Error al ejecutar el comando");
	free(cmd_path);
	free_double_pointer(cmd_arg);
	exit(1);
}

int	wait_for_children(pid_t pid1, pid_t pid2)
{
	int	status;

	waitpid(pid1, &status, 0);
	waitpid(pid2, &status, 0);
	if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
		return (WEXITSTATUS(status));
	return (0);
}

void	free_double_pointer(char **ptr)
{
    int	i;

	i = 0;
    while (ptr[i])
        free(ptr[i++]);
    free(ptr);
}

