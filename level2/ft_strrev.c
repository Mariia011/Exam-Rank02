/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:09:25 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 17:32:33 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int len = 0;
	int count = 0;
	char tmp;
	while(str[len])
		len++;
	while (count <= len/2)
	{

		tmp = str[count];
		str[count] = str[len - count - 1];
		str[len - count - 1] = tmp;
		count++;
	}
	return(str);
}

#include <stdio.h>

int main()
{
	char str[20] = "abcdefg";
	printf("%s", ft_strrev(str));
}
