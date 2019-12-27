/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_nbr_precision.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:24:41 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/25 03:51:56 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_apply_nbr_precision(int is_neg, size_t sz, char *tmp)
{
	char	*str;
	size_t	ln;

	if (!(str = malloc(sizeof(char) * (sz + 1))))
		return (NULL);
	if (sz != 0)
	{
		ln = sz - ft_strlen(tmp);
		ft_memset(str, '0', sz);
		if (is_neg)
			str[0] = '-';
		ln += (is_neg) ? 1 : 0;
		ft_memcpy(str + ln, tmp, ft_strlen(tmp));
	}
	str[sz] = '\0';
	free(tmp);
	return (str);
}
