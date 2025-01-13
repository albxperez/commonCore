/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:59:44 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/13 16:45:31 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	first_process_input(char *argv[], int *fd, char *envp[])
{
	int	fd_infile;

	fd_infile = open(argv[1], O_RDONLY);
	if (fd_infile < 0)
	{
		perror("Error con el archivo");
		exit(2);
	}
	/*Redirigir stdout a pipe_fd[1]*/
	close(fd[0]);
	dup2(fd_infile, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	/*ejecutar comando*/
	execute_cmd(argv[2], envp);
	close(fd_infile);
}

void	second_process_output(char *argv[], int *fd, char *envp[])
{
	int	fd_outfile;

	fd_outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_outfile < 0)
	{
		perror("Error con el archivo");
		exit(1);
	}
	/*Redirigir stdout a pipe_fd[0]*/
	close(fd[1]);
	dup2(fd_outfile, STDOUT_FILENO);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	close(fd_outfile);
	/*ejecutar comando*/
	execute_cmd(argv[3], envp);
}

int	main(int argc, char *argv[], char *envp[])
{
	int		fd[2];
	int		code;
	pid_t	pid1;
	pid_t	pid2;

	if (argc != 5)
	{
		printf("Numero incorrecto de parametros\n");
		exit(1);
	}
	/*se crea la pipe*/
	if (pipe(fd) < 0)
	{
		perror("Error al crear el pipe.");
		exit(1);
	}
	/*primer proceso hijo*/
	pid1 = fork();
	if (pid1 < 0)
	{
		perror("Error al crear el primer proceso");
		exit(1);
	}
	if (pid1 == 0)
		first_process_input(argv, fd, envp);
	/*segundo proceso hijo*/
	pid2 = fork();
	if (pid2 < 0)
	{
		perror("Error al crear el segundo proceso\n");
		exit(1);
	}
	if (pid2 == 0)
		second_process_output(argv, fd, envp);
	close(fd[0]);
	close(fd[1]);
	code = wait_for_children(pid1, pid2);
	return (code);
}
