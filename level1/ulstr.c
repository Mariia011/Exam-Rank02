/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:10:17 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/05 18:38:20 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ulstr(char *str)
{
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		else if(*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
}
