/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:16:37 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 14:41:23 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchr(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	char c;
	if(n/10 >= 1)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	ft_putchr(c);
}

int ft_atoi(char *str)
{
	int i = 0;
	while(*str)
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return(i);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(i < 10)
	{
		int tmp = ft_atoi(argv[1]);
		int res = tmp * i;
		ft_putnbr(i);
		write(1, " * ", 3);
		ft_putnbr(tmp);
		write(1, " = ", 3);
		ft_putnbr(res);
		write(1, "\n", 1);
		i++;
	}
	return(1);
}


// int main()
// {
// 	char *str = "89";
// 	int n = ft_atoi(str);
// 	ft_putnbr(908);
// 	printf("     %d", n);
// }
