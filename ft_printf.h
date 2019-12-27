/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 23:31:38 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/27 03:08:30 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAGS "-0"
# define TYPES "cspdiuxX%"

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_parse
{
	size_t		is_left;
	size_t		is_0_filled;
	size_t		is_width;
	size_t		width;
	size_t		is_prec;
	size_t		prec;
	char		type;
}				t_parse;
int				ft_printf(const char *str, ...);
void			ft_convert_str(const char *str, char **converted_str,
					va_list args);
int				ft_is_type(char c, const char *flags);
char			*ft_get_formated(char *str, va_list args);
void			ft_init_struct(t_parse *parsed);
void			ft_fill_struct(va_list args, t_parse *parsed, char *str);
char			*ft_set_prec(char *str, t_parse *parsed, va_list args);
char			*ft_set_width(char *str, t_parse *parsed, va_list args);
char			*ft_format_char(t_parse *parsed, char c);
char			*ft_format_string(t_parse *parsed, char *tmp);
char			*ft_format_nbr(t_parse *parsed, long long value);
char			*ft_set_nbr_precision(t_parse *parsed, long long value);
char			*ft_apply_nbr_precision(int is_neg, size_t sz, char *tmp);
char			*ft_set_nbr_width(t_parse *parsed, long long value);
char			*ft_apply_nbr_width(t_parse *parsed, int is_neg, size_t sz,
					char *tmp);
char			*ft_nbr_precision_n_width(t_parse *parsed, long long value);
char			*ft_hex_to_str(unsigned long nbr);

char			*ft_lltoa(long long n);
int				ft_atoi(const char *s);
int				ft_isdigit(int c);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar(char c);
void			ft_putstr(char *s);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strupcase(char *str);

#endif
