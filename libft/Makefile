# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 11:36:23 by aperez-r          #+#    #+#              #
#    Updated: 2024/10/04 09:35:17 by aperez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
# Compilador
	CC = cc
# Opciones de compilación
	CFLAGS = -Wall -Wextra -Werror
# Comando para crear librerías estáticas
	AR = ar rcs
# Nombre de la librería
	NAME = libft.a

# Lista de archivos fuente
	SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
		ft_substr.c ft_strjoin.c\
#generar archivos objeto correspondientes
OBJ =  ${SRC:.c=.o}

all: ${NAME}

# Regla principal: crear la librería
${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}
	@echo "Librería ${NAME} creada."

# Regla para compilar los archivos .c en archivos .o
%.o: %.c 
	${CC} ${CFLAGS} -c $< -o $@

# Regla para limpiar archivos .o
clean: 
	@rm -f ${OBJ}
	@echo "archivos objeto borrados"
#Regla para limpiar los archivos .o y a libreria 
fclean: clean
	@rm -f ${OBJ}
	@rm -f ${NAME}
	@echo "archivos objeto y libreria borrada"
#Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean ${NAME}
	@echo "se ha vuelto a hacer el make"
#se definen todas las reglas utilizadas en el makefile, se define que son nombres de comandos 
# y no de archivos  
.PHONY	= all clean fclean re 
