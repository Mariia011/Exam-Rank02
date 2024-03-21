/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:49:30 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 17:39:18 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	while(*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return(res);
}

int main(int argc, char **argv)
{
	int a;
	int b;
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	printf("%d", a);
	return(1);
}
