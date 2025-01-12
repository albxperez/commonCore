/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:03:06 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/12 12:23:49 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "lib/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

void	first_process_input(char *argv[], int *fd, char *envp[]);
void	second_process_input(char *argv[], int *fd, char *envp[]);
void	execute_cmd(char *cmd, char *envp[]);
void	free_double_pointer(char **ptr);
char	*get_path(char *cmd_arg, char **envp);
char	*find_cmd_path(char *cmd_arg, char *path_divided[]);
int	wait_for_children(pid_t pid1, pid_t pid2);

#endif
