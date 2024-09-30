# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 11:36:23 by aperez-r          #+#    #+#              #
#    Updated: 2024/09/30 13:12:14 by aperez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc              # Compilador
CFLAGS = -Wall -Wextra -Werror -c  # Opciones de compilación
AR = ar rcs           # Comando para crear librerías estáticas
LIB = libft.a      # Nombre de la librería

# Lista de archivos fuente
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
      ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
      ft_strnstr.c ft_atoi.c
#generar archivos objeto correspondientes
OBJ =  $(SRC:.c=.o)

# Regla principal: crear la librería
$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ)
	echo "Librería $(LIB) creada."

# Regla para compilar los archivos .c en archivos .o
%.o: %.c mylib.h
	$(CC) $(CFLAGS) $< -o $@

# Regla para limpiar archivos temporales
clean:
	rm -f *.o $(LIB)
	echo "Archivos objeto y librería eliminados."
