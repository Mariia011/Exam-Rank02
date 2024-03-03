/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:19:45 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/03 13:10:50 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    while (*str)
    {
        while (*str == ' ' || (*str >= 9 && *str <= 13))
        {
            str++;
        }
        if (*str == '-')
            sign *= -1;
        if (*str == '-' || *str == '+')
            str++;
        while (*str >= '0' && *str <= '9')
        {
            result = result * 10 + *str - '0';
            str++;
        } 
    }
    return (result * sign);
}

#include <stdio.h>

int main()
{
    const char *str = "+++---321";
    int num = ft_atoi(str);
    printf ("%i", num);
}