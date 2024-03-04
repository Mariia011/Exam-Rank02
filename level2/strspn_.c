/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn_.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:31:37 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/04 16:07:04 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strchr(const char *str, int c)
{
	while(*str)
	{
		if (*str == c)
			return(1);
		else
			str++;
	}
return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
	size_t size = 0;
	while(s[size])
	{
		if(ft_strchr(accept, s[size]))
		{
			size++;
		}
		else
			break ;
	}
	return (size);
}

int main()
{
	printf("%zu", ft_strspn("abaaabbaha", "abcd"));
}
