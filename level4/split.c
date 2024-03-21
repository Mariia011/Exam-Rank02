/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:23:34 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/20 20:22:39 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int is_delim(int c)
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
		if(is_delim(str[i]))
			flag = 1;
		if(flag && !is_delim(str[i]))
			{
				count++;
				flag = 0;
			}
		i++;
	}
	return(count + flag);
}

void dealloc(char *str)
{
	free(str);
	str == 0;
}

int current_len(char *str)
{
	int count = 0;
	while(!is_delim(str) && *str)
	{
		count++;
	}
	return(count);
}

char **alloc_res(char *str, char **res, int count)
{
	int i = 0;
	int cur_len = 0;
	while (i < count && *str)
	{
		while(is_delim(str))
			str++;
		cur_len = current_len(str);
		int j = 0;
		while(res[i][cur_len] && *str)
		{
			res[i][j] = *str;

		}
	}

}

char **split(char *str)
{
	char **res;
	if(!str)
		return(0);
	res = malloc(sizeof(char *) * (count_words(str) + 1));
	if(!res)
		return (0);
	alloc_res(str, res, count_words(str));
	return(1);
}

int main(int argc, char **argv)
{
	char **res;
	if(argc == 2)
	{
		res = split(argv[1]);
	}
	for(int i = 0; i < count_words(argv[1]); i++)
	{

	}
}
