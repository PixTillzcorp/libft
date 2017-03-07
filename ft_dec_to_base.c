/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heinfalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 19:48:18 by heinfalt          #+#    #+#             */
/*   Updated: 2017/03/06 19:48:20 by heinfalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dec_to_base(unsigned int nbr, int base)
{
	int rest;
	int ret;
	int i;

	rest = 0;
	ret = 0;
	i = 1;
	while (nbr)
	{
		rest = nbr % base;
		nbr = nbr / base;
		ret += (rest * i);
		i *= 10;
	}
	return (ft_itoa(ret));
}
