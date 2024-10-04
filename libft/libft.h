/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:28:19 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/04 09:36:15 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <bsd/string.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>

// Funciones relacionadas con caracteres
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

// Funciones relacionadas con cadena
int					ft_strlen(const char *str);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t dstsize);
unsigned int		ft_strlcat(char *dest, const char *src, size_t size);

// Funciones de conversión de mayúsculas y minúsculas
int					ft_toupper(int c);
int					ft_tolower(int c);

// Funciones de búsqueda en cadenas
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);

// Comparación de cadenas y memoria
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *str, const char *find, size_t len);
int					ft_atoi(const char *nptr);

void				*ft_calloc(size_t nelem, size_t elsize);
char				*ft_strdup(const char *s);

char                            *ft_substr(char const *s, unsigned int start, size_t len);
char                            *ft_strjoin(char const *s1, char const *s2);

void                            ft_putchar_fd(char c, int fd);
void                            ft_putendl_fd(char *s, int fd);
void                            ft_putnbr_fd(int n, int fd);
void                            ft_putstr_fd(char *s, int fd);
#endif /* LIBFT_H */
