/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/14 20:14:28 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	return((octet) >> 8);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%u", reverse_bits(2));
// }
