/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:39:21 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/04 15:54:43 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strspn.c"
//size_t ft_strspn(const char *s, const char *accept);


int main()
{
	printf("%zu", ft_strspn("abaaabbaha", "abcd"));
}
