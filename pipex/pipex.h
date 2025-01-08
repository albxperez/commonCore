/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:03:06 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:11:39 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include "lib/libft.h"

void	first_process_input(char *argv[], int *fd, char *envp[]);
void    second_process_input(char *argv[], int *fd, char *envp[]);
void	execute_cmd(char *cmd, char *envp[]);

#endif
