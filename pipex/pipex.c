
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:59:44 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/08 18:50:32 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"


void	first_process_input(char *argv[], int *fd, char *envp[])
{
	int	fd_infile;

	fd_infile = open(argv[1], O_RDONLY);
	if(fd_infile < 0)
		perror("Error con el archivo");
	/*Redirigir stdout a pipe_fd[1]*/
	close(fd[0]);
	dup2(fd_infile, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	/*ejecutar comando*/
	execute_cmd(argv[2], envp);
}

void	second_process_output(char *argv[], int *fd, char *envp[])
{
	int fd_outfile;

	fd_outfile = open(argv[4], O_WRONLY);
	if(fd_outfile < 0)
		perror("Error con el archivo");
	/*Redirigir stdout a pipe_fd[0]*/
	close(fd[1]);
	dup2(fd_outfile, STDOUT_FILENO);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	/*ejecutar comando*/
	execute_cmd(argv[3], envp);
}

/*char	*get_path(char *envp[])
{
	char **path_divided;
	
	while(*envp)
	{
		if(ft_strncmp(*envp, "PATH", 4) == 0)
			break;
		envp++;
	}
	printf("%s\n envp: " , *envp);
	path_divided = ft_split(*envp + 5, ':');
	printf("%s\n path_divided:", *path_divided);
	return(*path_divided);

}*/

char *get_path(char **envp)
{
    char **path_divided;

    while (*envp) {
        if (ft_strncmp(*envp, "PATH=", 5) == 0) {
            printf("PATH encontrado: %s\n", *envp);
            path_divided = ft_split(*envp + 5, ':');
            printf("Primera ruta: %s\n", path_divided[0]);
            return *path_divided;
        }
        envp++;
    }
    printf("PATH no encontrado\n");
    return NULL;
}


void	execute_cmd(char *cmd, char *envp[])
{
	char	*cmd_path;
	char	**cmd_arg;

	cmd_arg = ft_split(cmd, ' ');
	printf("%s\n", *cmd_arg);
	cmd_path = get_path(envp);
	printf("%c\n cmd_path:",*cmd_path);
	if(!cmd_path)
	{
		perror("Comando no encontrado");
		exit(1);
	}
	execve(cmd_path, cmd_arg, envp);
}

int main(int argc, char *argv[], char *envp[])
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
	{
		//printf("Estás en el primer proceso hijo\n");
		first_process_input(argv, fd, envp);
	}
	/*segundo proceso hijo*/
	pid2 = fork();
	if(pid2 < 0)
                printf("Error al crear el segundo proceso\n");
        if(pid2 == 0)
	{
                //printf("Estás en el segundo proceso hijo");
		second_process_output(argv, fd, envp);
	}
}
