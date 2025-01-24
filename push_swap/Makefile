# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 18:34:17 by aperez-r          #+#    #+#              #
#    Updated: 2025/01/21 18:34:20 by aperez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# Lista de archivos fuente
SOURCES = *.c movements\*.c

# Lista de archivos objeto
OBJECTS = *.o movements\*.o

# Libreria
LIBFT = lib/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

OBJECTS =  ${SRC:.c=.o}

# Regla principal
$(NAME): $(OBJECTS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJECTS) -L lib -lft -o $(NAME)
	@echo "Created $(NAME)"

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
