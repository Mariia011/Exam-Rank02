/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:26:50 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/20 20:47:10 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#inlcude <unistd.h>
// void ft_putnbr(int n)
// {
// 	char c = 0;
// 	while(n)
// 	{
// 		if(n > 10)
// 			ft_putnbr(n/10);
// 		c = n + '0';
// 		write(1, &c, 1);
// 	}
// }

int is_prime(int n)
{
	int i = 2;
	//	printf("jiv");
	if(n != 2)
	{
	while(i <= n / 2)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	}
	return(1);
}

int main(int argc, char **argv)
{
	int i = 2;
	int num;
	if(argc != 2)
	{
		printf("\n");
		return(0);
	}
	num = atoi(argv[1]);
	if(num == 1)
		printf("1");
	while(num >= i)
	{
		if(num % i == 0 && is_prime(i))
		{
			printf("%d", i);

			if(i != num)
				printf("*");
			else
				printf("\n");
			num = num / i;
		}
		else
			i++;
	}
	return(0);
}
