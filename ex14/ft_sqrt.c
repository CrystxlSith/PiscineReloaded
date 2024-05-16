/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:11 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/16 15:54:06 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;
	
	if (nb < 0)
		return (0);
	res = 1;
	while (res * res < nb)
	{
		if (res > 46340)
			return (0);
		res++;
	}
	if (res * res == nb)
		return (res);
	
	return (0);
}
