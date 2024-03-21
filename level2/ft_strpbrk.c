/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:46:18 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 17:47:55 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strpbrk(const char *s1, const char *s2)
{
	if(!s2)
		return("NULL");
	int x = 0;
	while(s2[x])
	{
		int i = 0;
		while(s1[i])
		{
			if(s2[x] == s1[i])
			{
				return((char *)s1 + i);
			}
			i++;
		}
	x++;
	}
	return("NULL");
}
