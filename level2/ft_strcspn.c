/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:31:19 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/04 16:22:17 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strchr(const char *reject, int c)
{
	while(*reject)
	{
		if (*reject == c)
			return (0);
		reject++;
	}
return (1);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t span = 0;
	while(s[span])
	{
		if(!ft_strchr(reject, s[span]))
			break;
		span++;
	}
	return(span);
}

int main()
{
	printf("%zu", ft_strcspn("abcdefg", "d"));
}
