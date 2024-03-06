/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:00:38 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/06 18:09:02 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int find_c(char c, char *str)
{
	while(*str)
	{
		if(*str == c)
			return (1);
		str++;
	}
	return (0);
}

int find_rev(char *str, int i, char c)
{
	while(i)
	{
		if (str[i - 1] == c)
		{
			return(1);
		}
		i--;
	}
	return(0);
}

void inter(char *str1, char *str2)
{
	int i = 0;
	if(!str1 || !str2)
	{
		write(1, "\n", 1);
	}
	while(str1[i])
	{
		if(find_c(str1[i], str2) && !find_rev(str1, i, str1[i]))
		{
			write(1, str1 + i, 1);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
