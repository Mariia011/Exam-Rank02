/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:54:50 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/05 16:05:26 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int x)
{
	char	str[] = "0123456789";

	if (x > 10)
		ft_putnbr(x / 10);
	write(1, &str[x % 10], 1);
}

int	is_prime(int x)
{
	int	i;

	i = 2;
	while (i <= x / 2)
	{
		if (x % i == 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int res;

	i = 2;
	res = 0;
	if (argc <= 1)
		return ;
	while (i < **argv)
	{

		if(is_prime(i))
		{
			res += i;
		}
		i++;
	}
	ft_putnbr(res);
}
