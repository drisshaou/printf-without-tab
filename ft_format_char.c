/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:29:45 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/24 02:08:28 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_format_char(t_parse *parsed, char c)
{
	char	*s;

	if (!(s = malloc(sizeof(char) * 2)))
		return (NULL);
	s[0] = c;
	s[1] = '\0';
	return (ft_format_string(parsed, s));
}
