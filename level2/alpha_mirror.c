/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:08:42 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/02 18:01:48 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror(char *str)
{
	while(*str)
	{
			if (*str >= 'A' && *str <= 'Z')
			{
				*str = 'Z' - (*str - 'A');
				write(1, str, 1);
			}
			else if (*str >= 'a' && *str <= 'z')
			{
				*str = 'z' - (*str - 'a');
				write(1, str, 1);
			}
			else
				write(1, str, 1);
		str++;
		}
	}

int main(int argc, char **argv)
{
	alpha_mirror(argv[1]);
}
