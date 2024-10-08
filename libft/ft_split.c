/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:15:25 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/08 08:56:59 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
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

static void ft_free_split(char **result, int letters)
{
	int	i;

	i = 0;
	if (result == NULL)
		return;
	while (i < letters)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_fill_split(char **result, const char *s, char c)
{
	int	i;
	int	len;
	int	word;
	i = 0;
	word = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			i++;
		else
		{
			while (s[len] != '\0' && s[len] != c)
				len ++;
			result[word] = (char *)malloc(len + 1);
			if (result == NULL)
			{
				ft_free_split(result, word);
				return (0);
			}

			ft_strlcpy(*result, s, len + 1);
			i += len;
			word ++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if(ft_fill_split(result, s, c) == 0)
	{
		free(result);
		return (NULL);
	}
	return (result);
}

int main(void)
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
}
