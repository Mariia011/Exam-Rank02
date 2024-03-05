/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:30:03 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/05 17:52:28 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check(char *str, int c)
{
	while(*str)
	{
		if(*str == c)
			return(0);
		str++;
	}
	return (1);
}

void union_(char *str, char *str2)
{
	char compare[256];
	int i = 0;
	int x = 0;
	int t = 0;
	while (str[i])
	{
		if(ft_check(compare, str[i]))
		{
			write(1, str + i, 1);
			compare[t++] = str[i];
		}
		i++;
	}
	while (str2[x])
	{
		if(ft_check(compare, str2[x]))
		{
			write(1, str2 + x, 1);
			compare[t++] = str2[x];
		}
		x++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		union_(argv[1], argv[2]);
	}
	return (0);
}
