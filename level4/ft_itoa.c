/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:26:13 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/15 20:12:12 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int num)
{
	if (num == -2147483648)
		return ("2147483648\0");
	int count = 0;
	if(num <= 0)
	{
		count++;
	}
	while(num > 0)
	{
		num /= 10;
		count++;
	}
	char *result = malloc(sizeof(char) + (count + 1));
	if (!result)
		return(NULL);
	result[count] = '\n';
	if (num == 0)
	{
		result[0] = 0;
	}
	if (num < 0)
	{

	}
}


#include <limits.h>
#include <stdio.h>

int main()
{
	int n = 8989;
	char *str = 0;
	printf("%u", INT_MIN);
}
