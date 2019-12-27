/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 23:31:45 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/27 02:34:38 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	char	*converted_str;
	va_list	args;
	size_t	size;

	if (!str)
		return (0);
	converted_str = ft_strdup("");
	va_start(args, str);
	ft_convert_str(str, &converted_str, args);
	va_end(args);
	if (converted_str != NULL)
	{
		size = ft_strlen(converted_str);
		ft_putstr(converted_str);
		free(converted_str);
	}
	else
		size = 0;
	return (size);
}
