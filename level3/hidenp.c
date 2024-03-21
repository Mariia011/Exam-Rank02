/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:31:52 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 16:04:15 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(argv[1][i])
	{
		if(argv[1][i] == argv[2][j])
			i++;
		j++;
	}
	if(!argv[1][i])
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return(1);
}
