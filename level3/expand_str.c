/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:48:45 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/05 19:54:17 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int if_delim(int c)
{
	return(c == '\t' || c == '\0' || c == ' ');
}

int ft_check(char *str)
{
	while (*str)
	{
		if(!if_delim(*str))
			return(1);
		str++;
	}
	return(0);
}


void expand_str(char *str)
{
	int flag = 0;
	int i = 0;
	while(str[i])
	{
		if(!if_delim(str[i]))
		{
			write(1, str + i, 1);
			flag = 1;
		}
		if(ft_check(str + i) && if_delim(str[i]) && flag)
		{
			write(1, "  ", 2);
			flag = 0;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
}
