/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddovbis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:30:29 by ddovbis           #+#    #+#             */
/*   Updated: 2017/02/24 18:04:51 by ddovbis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_absolute(long n)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
		nbr = nbr * -1;
	return (nbr);
}
