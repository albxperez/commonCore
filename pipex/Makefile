# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 15:48:29 by aperez-r          #+#    #+#              #
#    Updated: 2024/12/11 15:52:08 by aperez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilador
	CC = cc
# Opciones de compilación
	CFLAGS = -Wall -Werror -Wextra
# Comando para crear librerías estáticas
	AR = ar rcs
# Nombre de la librería
	NAME = pipex.a

# Lista de archivos fuente
	SRC = 
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
	@rm -f ${OBJ} $(BONUS_OBJ)
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
