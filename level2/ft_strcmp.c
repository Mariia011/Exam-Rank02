/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:15:49 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/03 13:31:07 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    if(!s1)
        return(-1);
    if(!s2)
        return (1);
    while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
        i++;
    if((unsigned)s1[i] > (unsigned)s2[i])
        return (1);
    else if((unsigned)s1[i] < (unsigned)s2[i])
        return (-1);
    return (0);
}
/*
#include <stdio.h>

int main()
{
    printf("%d", ft_strcmp("abc", "ab"));
}
*/