/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:12:20 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/20 21:30:25 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
//#include <stdio.h>
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if(!begin_list || *begin_list == 0)
		return;
	if(cmp(*begin_list, data_ref) == 0)
	{

	}


}
