/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:08:17 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/15 18:26:00 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdbool.h>

static int count_words(char *str) {
    int count = 0;
    bool in_word = false;

    while (*str) {
        if (*str != ' ' && !in_word) {
            in_word = true;
            count++;
        } else if (*str == ' ') {
            in_word = false;
        }
        str++;
    }
    return count;
}

static char *extract_word(char *str, int start, int end) {
    char *word = malloc((end - start + 1) * sizeof(char));
    if (!word)
        return NULL;
    int i = 0;
    while (start < end) {
        word[i++] = str[start++];
    }
    word[i] = '\0';
    return word;
}

char **ft_split(char *str) {
    if (!str)
        return NULL;

    int words = count_words(str);
    char **result = malloc((words + 1) * sizeof(char *));
    if (!result)
        return NULL;

    int i = 0, start = -1, word_index = 0;
    while (str[i]) {
        if (str[i] != ' ' && start == -1) {
            start = i; // Marca el inicio de una palabra
        }
        if ((str[i] == ' ' || str[i + 1] == '\0') && start != -1) {
            int end = (str[i] == ' ') ? i : i + 1;
            result[word_index++] = extract_word(str, start, end);
            start = -1; // Reinicia el inicio
        }
        i++;
    }
    result[word_index] = NULL;
    return result;
}

