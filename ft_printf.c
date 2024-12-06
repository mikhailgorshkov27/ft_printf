/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:58:07 by mgorshko          #+#    #+#             */
/*   Updated: 2024/12/06 17:25:46 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	
	len = ft_count(format);
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{	
			if (format[++i] == 'c')
				len += ft_printf_c(va_arg(args, int));
			if (format[i] == 's')
				len += ft_printf_s(va_arg(args, char*));
			if (format[i] == 'i')
				len += ft_printf_i(va_arg(args, int));
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	return (len);
}
