/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:51:45 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/14 21:04:50 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }

    char *str = argv[1];
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + ('z' - str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + ('Z' - str[i]);
        }

        write(1, &str[i], 1);
        i++;
    }

    write(1, "\n", 1);

    return 0;
}

