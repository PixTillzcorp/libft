/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heinfalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 13:37:45 by heinfalt          #+#    #+#             */
/*   Updated: 2017/03/15 13:37:47 by heinfalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_litoa(long long int nbr)
{
	char			*ret;
	long long int	mod;

	mod = 0;
	mod = ft_initlmod(nbr, mod);
	ret = ft_strdup("");
	while (nbr > 0)
	{
		ret = ft_chrjoin_free(ret, (nbr / mod) + 48, 1);
		nbr = nbr % mod;
		mod /= 10;
	}
	return (ret);
}