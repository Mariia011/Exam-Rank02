/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:29:13 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/04 19:04:21 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	char *tmp;
	char *start;
	int i = 0;
	if (!src)
		return (0);
	while (src[i])
		i++;
	tmp = malloc(i + 1);
	start = tmp;
	if(!tmp)
		return (0);
	while (*src)
	{
		*tmp = *src;
		src++;
		tmp++;
	}
	*tmp = '\0';
	return(start);
}

int main()
{
	char *str = ft_strdup("ddd");
	printf("%s", str);
	free(str);
}
