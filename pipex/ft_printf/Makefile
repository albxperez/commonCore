# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 17:39:24 by aperez-r          #+#    #+#              #
#    Updated: 2024/10/23 17:57:52 by aperez-r         ###   ########.fr        #
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
	NAME = libftprintf.a

# Lista de archivos fuente
	SRC = ft_printf.c ft_print_char.c ft_print_str.c\
	      ft_print_ptr.c ft_print_nbr.c ft_print_unsigned.c\
	      ft_print_hexa.c\

#generar archivos objeto correspondientes
OBJ =  ${SRC:.c=.o}

all: ${NAME}

# Regla principal: crear la librería
${NAME}:${OBJ}
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
	@rm -f ${NAME}
	@echo "archivos objeto y libreria borrada"
#Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean ${NAME}
	@echo "se ha vuelto a hacer el make"
#se definen todas las reglas utilizadas en el makefile, se define que son nombres de comandos 
# y no de archivos  
.PHONY	= all clean fclean re
