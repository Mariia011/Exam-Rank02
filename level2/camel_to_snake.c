/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:03:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/02 20:39:45 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (*str)
	{
		i++;
		str++;
	}
return (i);
}

void *camel_to_snake(char *str)
{
	char *tmp;
	int i = ft_strlen(str);

	if(!str)
		return (NULL);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
			str++;
			*str = '_';

		}
		else
			write(1, &str, 1);
		str++;
	}
	tmp = malloc(i + 1);
	tmp[i] = '\n';
}

int main(int argc, char **argv)
{
	char *str = malloc(sizeof(camel_to_snake(argv[1])));
	int b = 0;

	for (int i = 0; i < ft_strlen(argv[1]), i++);
	{
		write (1, argv[1][b++], 1);
	}
}
