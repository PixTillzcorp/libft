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

char				*ft_ldec_to_base(long long nbr, long long base, int pre, char *flag)
{
	long long		rest;
	char			*ret;

	rest = 0;
	ret = ft_strdup("");
	if (!nbr)
	{
		if (!pre)
			return (NULL);
		return ("0");
	}
	while (nbr)
	{
		rest = nbr % base;
		nbr = nbr / base;
		ret = ft_chrjoin_free(ret, (48 + rest), 1);
	}
	if (ft_strlen(ret = ft_strrev(ret)) < pre && ft_strchr(flag, '-'))
		ret = ft_strjoin_free("0", ret, 'r');
	return (ret);
}
