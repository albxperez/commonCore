/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:15:25 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/07 20:59:15 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			s++;
		if (s[i] != '\0')
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				s++;
		}
	}
	return (words);
}

char	*ft_word_dup(const char *s, char c)
{
	int		len;
	char	*string;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len ++;
	string = (char *)malloc(len + 1);
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, s, len + 1);
	return (string);
}

void ft_free_split(char **result) {
    int i = 0;

    if (result == NULL)
        return; // No hacer nada si result es NULL

    while (result[i] != NULL) {
        free(result[i]); // Liberar cada palabra
        i++;
    }
    free(result); // Liberar el array de punteros
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			result[j] = ft_word_dup(&s[i], c);
			if(result[j] == NULL)
			{
				ft_free_split(result);
				return NULL;
			}
			j++;
			while (s[i] != '\0' && s[i] != c)
				s++;
		}
	}
	result[j] = NULL;
	return (result);
}

/*int main(void)
{
    char string[] = "lorem ipsum dolor sit amet, consectetur adipiscing elits.";
    char c = 'i'; // Delimitador
    char **result = ft_split(string, c);

    for (int i = 0; result[i] != NULL; i++)
    {
        printf("Palabra %d: %s\n", i + 1, result[i]);
        free(result[i]); // Liberamos la memoria de cada palabra
    }
    free(result); // Liberamos la memoria del array

    return 0;
}*/
