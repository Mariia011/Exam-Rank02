/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:15:51 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/04 21:35:47 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_delim(int c)
{
return(c == ' ' || c == '\t');
}

void epur_str(char *str)
{
	int flag = 0;
	int i = 0;
	while (str[i])
	{
		while (is_delim(str[i]))
		{
			flag = 1;
			write(1, str + i, 1);
		}
		else if (flag)
		{
			write(1, str + i, 1);
			flag = 0;
		}
			i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	return (0);
}
