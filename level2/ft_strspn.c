/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:35:21 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/04 15:56:57 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t  span = 0;
	if(!s || !accept)
		return (0);
	while (s[span])
	{
		int i = 0;
		while(accept[i])
		{
			if(s[span] == accept[i])
				break;
			else
				i++;
		}
		if(s[span] != accept[i])
			break;
	span++;
	}
	return (span);
}

