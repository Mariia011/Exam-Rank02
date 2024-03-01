/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:04:31 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/01 19:39:01 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}
// fix

// void rot_13(char *str)
// {
// 	unsigned int i;

// 	i = 0;
// 	if(!str)
// 		return ;
// 	while (str[i] && str[i] >= "A" && str[i] <= "Z")

// 			//	(str[i] >= 97 && str[i] <= 122))
// 	{
// 		write(1, (str + i), 1);
// 		i++;
// 	}
// 	str[i] = '\n';
// }

// #include <stdio.h>
// int main()
// {
// 	char str[] = "abc";
// 	rot_13(str);
// }
