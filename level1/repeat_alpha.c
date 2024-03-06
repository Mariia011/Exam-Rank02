/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:18:44 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/06 15:15:37 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	int count = 0;
	if(c >= 'a' && c <= 'z')
		count = c - 'A' + 1;
	count = c - 'a' + 1;
	while(count)
	{
		write(1, &c, 1);
		count--;
	}
}


void repeat_alpha(char *str)
{
	int i = 0;
	while(str[i])
	{
		if((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			ft_putchar(str[i]);
		}
		else
			write(1, &str[	i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
}
