/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:29:06 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/25 04:08:56 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_format_nbr(t_parse *parsed, long long value)
{
	char	*str;

	if (parsed->is_prec && parsed->is_width && parsed->type != 'p')
		str = ft_nbr_precision_n_width(parsed, value);
	else if (parsed->is_prec && !parsed->is_width && parsed->type != 'p')
		str = ft_set_nbr_precision(parsed, value);
	else
		str = ft_set_nbr_width(parsed, value);
	return (str);
}
