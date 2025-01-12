# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 12:40:38 by aperez-r          #+#    #+#              #
#    Updated: 2025/01/12 13:19:10 by aperez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

# Lista de archivos fuente
SOURCES = pipex_utils.c pipex.c

# Lista de archivos objeto
OBJECTS = pipex_utils.o pipex.o

# Libreria
LIBFT = lib/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -f

# Regla principal
$(NAME): $(OBJECTS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJECTS) -L lib -lft -o $(NAME)
	@echo "Created $(NAME)"

src/ft_pipex_utils.o: src/ft_pipex_utils.c
	@echo "Compiling ft_pipex_utils.c"
	@$(CC) $(CFLAGS) -c src/ft_pipex_utils.c -o src/ft_pipex_utils.o

src/ft_pipex.o: src/ft_pipex.c
	@echo "Compiling ft_pipex.c"
	@$(CC) $(CFLAGS) -c src/ft_pipex.c -o src/ft_pipex.o


all: $(NAME)

# Limpiar archivos objeto
clean:
	@$(RM) $(OBJECTS)
	@$(MAKE) -C lib clean
	@echo "All objects cleaned"

# Limpiar todo
fclean: clean
	@$(RM)	$(NAME)
	@$(MAKE) -C lib fclean
	@echo "All executable cleaned"

# Recompilar todo
re: fclean all

$(LIBFT):
	@$(MAKE) -C lib

.PHONY: all clean fclean re
