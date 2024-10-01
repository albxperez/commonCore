# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 11:36:23 by aperez-r          #+#    #+#              #
#    Updated: 2024/10/01 21:59:26 by aperez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = cc              # Compilador
CFLAGS = -Wall -Wextra -Werror -c  # Opciones de compilación
AR = ar rcs           # Comando para crear librerías estáticas
NAME = libft.a      # Nombre de la librería

# Lista de archivos fuente
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
      ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
      ft_strnstr.c ft_atoi.c
#generar archivos objeto correspondientes
OBJ =  $(SRC:.c=.o)

all: ${NAME}

# Regla principal: crear la librería
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	echo "Librería $(NAME) creada."

# Regla para compilar los archivos .c en archivos .o
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos .o
clean: 
	@rm -f $(OBJ)
	echo "archivos objeto borrados"
#Regla para limpiar los archivos .o y a libreria 
fclean: clean
	@rm -f $(NAME)
	echo "archivos objeto y libreria borrada"
#Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean $(NAME)
	echo "se ha vuelto a hacer el make"
#se definen todas las reglas utilizadas en el makefile, se define que son nombres de comandos 
# y no de archivos  
.PHONY	= all clean fclean re 
