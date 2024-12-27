/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:59:44 by aperez-r          #+#    #+#             */
/*   Updated: 2024/12/27 19:44:41 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


void	first_process_input(char *argv[], int *fd)
{
	int	fd_infile;

	fd_infile = open(argv[1], O_RDONLY);
	if(fd_infile < 0)
		perror("Error con el archivo");
	/*Redirigir stdout a pipe_fd[1]*/
	close fd[0];
	dup2(fd_infile, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close fd[1];
	/*ejecutar comando*/
}

void	second_process_output(char *argv[], int *fd)
{
	int fd_outfile;

	fd_outfile = open(argv[4],O_WRONLY);
	if(fd_outfile < 0)
		perror("Error con el archivo");
	/*Redirigir stdout a pipe_fd[0]*/
	close fd[1];
	dup2(fd_outfile, STDOUT_FILENO);
	dup2(fd[0], STDIN_FILENO);
	close fd[0];
	/*ejecutar comando*/
}

void	execute_cmd(char *cmd)
{
	char	*cmd_path;
	char	*cmd_arg;

	cmd_arg = ft_split(cmd, ' ');
	cmd_path = get_path(cmd_arg)
}

int main(int argc, char *argv[])
{
	int	fd[2];
	pid_t	pid1;
	pid_t	pid2;

	if(argc != 5) {
		printf("Numero incorrecto de parametros\n");
		exit(1);
	}
	/*se crea la pipe*/
	if(pipe(fd) < 0)
		perror("Error al crear el pipe.");
	/*primer proceso hijo*/
	pid1 = fork();
	if(pid1 < 0)
		printf("Error al crear el primer proceso");
	if(pid1 == 0)
		printf("Estás en el primer proceso hijo");
	/*segundo proceso hijo*/
	pid2 = fork();
	if(pid2 < 0)
                printf("Error al crear el segundo proceso");
        if(pid2 == 0)
                printf("Estás en el segundo proceso hijo");

