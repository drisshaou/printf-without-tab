/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_nbr_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:26:04 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/26 02:46:40 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_set_nbr_width(t_parse *parsed, long long value)
{
	char	*tmp;
	char	*hexa;
	size_t	size;
	int		is_neg;

	if (parsed->type == 'x')
		tmp = ft_hex_to_str((unsigned long)value);
	else if (parsed->type == 'X')
		tmp = ft_strupcase(ft_hex_to_str((unsigned long)value));
	else if (parsed->type == 'p')
	{
		hexa = ft_hex_to_str((unsigned long)value);
		tmp = ft_strjoin("0x", hexa);
		free(hexa);
	}
	else
		tmp = ft_lltoa(value < 0 ? -value : value);
	is_neg = (value < 0 && parsed->type != 'p') ? 1 : 0;
	size = ft_strlen(tmp);
	size += (is_neg) ? 1 : 0;
	if (parsed->is_width && parsed->width > size)
		size = parsed->width;
	return (ft_apply_nbr_width(parsed, is_neg, size, tmp));
}
