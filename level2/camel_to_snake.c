/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:03:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/03 11:27:25 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while(argv[1][i])		
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] += 32;	
				write(1, "_", 1);
				write(1, &argv[1][i], 1);
			}
			else 
				write(1, &argv[1][i], 1);
			i++;
		}
	}	
	write(1, "\n", 1);	
	return (1);
}
