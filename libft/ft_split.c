/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:13:07 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/07 12:49:47 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;
	int	i;

	count = 0;
	in_word = 0;
	i = 0;
       	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
    return count;
}

char	*ft_word_dup(const char *s, int start, int end)
{
	int	i;

	i = 0;
	char *word = (char *)malloc((end - start + 1)*sizeof(char *));
	if(word == NULL)
		return NULL;
	while(start < end)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return word;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int	count_words;
	size_t	i;
	size_t	j;
	int	start;

	count_words = ft_count_words(s, c);
	i = 0;
	j = 0;
	start = -1;
	result = (char **)malloc((count_words + 1)*sizeof(char *));
	if(result == NULL)
		return NULL;
	while (s[i] != '\0')
	{
		if(s[i] != c && start == -1)
		{
			start = i;
		}
		else if((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if(s[i] == c)
				result[j++] = ft_word_dup(s, start, i);
			else
				result[j++] = ft_word_dup(s, start, i + 1);
		start = -1;
		}
	i++;
	}
	result[j] = NULL;
	return result;
}

/*int	main(void)
{
	char string[] = "hola que tal estas está mañana";
	char c = 'a';
	char **result = ft_split(string, c);
	for (int i = 0; result[i] != NULL; i++) 
	{
        	printf("Palabra %d: %s\n", i + 1, result[i]);
        	free(result[i]);  // Liberamos la memoria de cada palabra
   	}
    	free(result);

}*/
