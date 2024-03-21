/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:20:03 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/14 19:17:48 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(*str)
	{
		i++;
		str++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int count = ft_strlen(argv[1]);
	while(count >= 0)
	{
		write(1, &argv[1][count], 1);
		count--;
	}
	return (0);
}


