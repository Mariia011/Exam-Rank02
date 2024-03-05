/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:30:17 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/05 18:04:13 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void display_str(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

void search_and_replace(char *str, int c, int b)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] != c)
			write(1, str + i, 1);
		if(str[i] == c)
		{
			str[i] = b;
			write(1, str + i, 1);
		}
	i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 4 && !argv[2][1] && !argv[3][1])
	{
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	return (1);
}
