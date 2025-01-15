/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:07:19 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/15 21:04:13 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 1;
    }
    
    char *str = argv[1];
    int i = 0;
    int repeat;

    while (str[i] != '\0')
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
        {
            write(1, &str[i], 1);
        }
        else
        {
            if (str[i] >= 'a' && str[i] <= 'z') 
            {
                repeat = str[i] - 'a' + 1;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                repeat = str[i] - 'A' + 1;
            }
            
            int j = 0;
            while (j < repeat)
            {
                write(1, &str[i], 1);
                j++;
            }
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}

