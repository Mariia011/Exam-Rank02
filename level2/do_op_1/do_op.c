/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:20:43 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/03 12:18:51 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int operation(int first, char *op, char second)
{

    if (*op == '+')
        return (first + second);
    else if (*op == '-')
        return (first - second);
    else if (*op == '*')
        return (first * second);
    else
        return (first / second);
}

int main(int argc, char **argv)
{
    int res;
    if (argc == 4)
    {
        if (atoi(argv[1]) && atoi(argv[3]))
        {
            int first_num = atoi(argv[1]);
            int second_num = atoi(argv[3]);
            if(*argv[2] == '*' || *argv[2] == '/'
                || *argv[2] == '-' || *argv[2] == '+')
                res = operation(first_num, argv[2], second_num); 
            printf("%d", res);
        }
    }
    printf("\n");
    return (1);
}