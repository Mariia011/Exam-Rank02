/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:53:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 17:48:01 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int * tab, unsigned int len)
{
	if (len == 0)
		return (0);

	int index = 0;
	int elem = tab[0];

	while(--len)
	{
		if (tab[len] > elem)
		{
			elem = tab[len];
		}
	}
	return (elem);
}
