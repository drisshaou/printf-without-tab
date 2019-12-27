/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_precision_n_width.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:26:57 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/26 01:52:31 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_nbr_precision_n_width(t_parse *parsed, long long value)
{
	char	*tmp;
	size_t	len;
	size_t	size;
	char	*str;

	tmp = ft_set_nbr_precision(parsed, value);
	len = ft_strlen(tmp);
	size = (parsed->width > len && parsed->width > 0) ? parsed->width : len;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(str, ' ', size);
	if (parsed->is_left)
		ft_memcpy(str, tmp, len);
	else
		ft_memcpy(str + (size - len), tmp, len);
	str[size] = '\0';
	free(tmp);
	return (str);
}
