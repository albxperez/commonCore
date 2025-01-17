/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:09:00 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/15 21:11:03 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("\n");
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char operator = argv[2][0]; 

    int result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("\n");
                return 0;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
            } else {
                printf("\n");
                return 0;
            }
            break;
        default:
            printf("\n");
            return 0;
    }

    printf("%d\n", result);
    return 0;
}

