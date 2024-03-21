/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:04:31 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/14 20:06:14 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc != 2 || !argv[1][0])
	{
		write(1, "\n", 1);
		return(0);
	}
	int i = 0;
	while (argv[1][i])
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
		if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
 		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1)
	return(1);
}
