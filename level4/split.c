/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:23:34 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/04 18:43:45 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_delimitor(int c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int count_words(char *str)
{
	int count = 0;
	short flag = 0;
	int i = 0;
	while (str[i])
	{
		if(is_delimitor(str[i]))
			flag = 1;
		if(flag && !is_delimitor(str[i]))
			{
				count++;
				flag = 0;
			}
		i++;
	}
	return(count + flag);
}

char **split(char *str)
{
	// char *res[];
	// if(!str)
	// 	return(0);

	// {

	// }
	// return();
}
