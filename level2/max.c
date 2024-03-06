/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:53:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/06 17:34:12 by marikhac         ###   ########.fr       */
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

int main()
{
	int arr[] = {10, 11, 23, 6431, 53, 132, 56};
	int maax = max(arr, 7);
	printf("%i", maax);
}
