/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:29:20 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/06 15:46:05 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int if_delim(char c)
{
	return(c == '\t' || c == ' ');
}

int if_last(char *elem)
{
	while(*elem == if_delim(*elem))
	{
		if (*elem != if_delim(*elem))
			return(0);
		elem++;
	}
return (1);
}

void last_word(char *str)
{
	int flag = 0;
	int i = 0;
	while(str[i])
	{
		if(if_delim(str[i]))
			flag = 0;
		if (!if_delim(str[i]))
			flag = 1;
		if (!if_delim(str[i]) && if_last(str + i) && flag)
		{
			write(1, str + i, 1);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
}
