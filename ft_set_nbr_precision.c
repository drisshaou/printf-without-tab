/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_nbr_precision.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:23:57 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/26 02:06:17 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_set_nbr_precision(t_parse *parsed, long long value)
{
	char	*tmp;
	size_t	size;
	int		is_neg;

	if (parsed->type == 'x')
		tmp = ft_hex_to_str((unsigned long)value);
	else if (parsed->type == 'X')
		tmp = ft_strupcase(ft_hex_to_str((unsigned long)value));
	else
		tmp = ft_lltoa(value < 0 ? -value : value);
	is_neg = (value < 0) ? 1 : 0;
	size = ft_strlen(tmp);
	if (parsed->is_0_filled)
		parsed->is_0_filled = 0;
	if (parsed->prec > size)
		size = parsed->prec;
	size += (is_neg) ? 1 : 0;
	if (parsed->prec == 0 && value == 0)
		size = 0;
	return (ft_apply_nbr_precision(is_neg, size, tmp));
}
