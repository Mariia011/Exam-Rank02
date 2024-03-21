/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:00:44 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 16:09:38 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	int mult;
	if(a > b)
		mult = a;
	mult = b;
	while(mult <= a * b)
	{
		if(mult % a == 0 && mult % b == 0)
			return(mult);
		mult++;
	}
	return(mult);
}
