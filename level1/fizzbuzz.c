/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:12:52 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/01 19:38:49 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(int i)
{
	char	str[10] = "0123456789";

	if (i > 10)
		putstr(i / 10);
	write(1, &str[i % 10], 1);
}

void	fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			putstr(i);
		i++;
		write(1, "\n", 1);
	}
}

int	main(void)
{
	fizzbuzz();
}
