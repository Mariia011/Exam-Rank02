/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:24:16 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/21 18:08:35 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char tmp;
	while(i)
	{
		tmp = (octet >> i & 1) + '0';
		write(1, &tmp, 1);
		i--;
	}
}

int main()
{
	print_bits('6');
}
