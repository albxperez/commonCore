# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 11:36:23 by aperez-r          #+#    #+#              #
#    Updated: 2024/09/30 12:07:43 by aperez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc              # Compilador
CFLAGS = -Wall -Wextra -Werror -c  # Opciones de compilación
AR = ar rcs           # Comando para crear librerías estáticas
LIB = libft.a      # Nombre de la librería

# Lista de archivos fuente
SRC = isalpha.c isdigit.c isalnum.c isascii.c isprint.c \
      strlen.c memset.c bzero.c memcpy.c memmove.c \
      strlcpy.c strlcat.c toupper.c tolower.c \
      strchr.c strrchr.c strncmp.c memchr.c memcmp.c \
      strnstr.c atoi.c
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
