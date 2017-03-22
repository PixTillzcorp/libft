/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldec_to_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heinfalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 13:35:45 by heinfalt          #+#    #+#             */
/*   Updated: 2017/03/15 13:35:48 by heinfalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_ldec_to_base(long long int nbr, long long int base)
{
	long long int	rest;
	long long int	ret;
	long long int	i;

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
	return (ft_litoa(ret));
}
