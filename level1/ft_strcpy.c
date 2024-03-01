/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:04:17 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/01 19:38:57 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!s2)
		return (s1);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Hello";
// 	char str1[] = "lox";
// 	char *res = ft_strcpy(str, str1);
// 	printf("%s", res);
// }
