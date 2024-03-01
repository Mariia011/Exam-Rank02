/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:59:07 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/01 19:38:44 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	if (argc == 2)
	{
		while (argv[i][x] == 9 || argv[i][x] == 32)
			x++;
		while ((argv[i][x] != 9 && argv[i][x] != 32) && argv[i][x])
		{
			write(1, &argv[i][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	first_word(argc, argv);
	return (1);
}
