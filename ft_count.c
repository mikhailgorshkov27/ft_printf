/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:36:57 by mgorshko          #+#    #+#             */
/*   Updated: 2024/12/06 14:59:23 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_count(const char *format)
{
	int	count;
	int i;
	
	count = (int)ft_strlen(format);
	i = 0;
	while(format[i])
	{
		if (format[i] == '%')
			count -= 2;
		i++;
	}
	return (count);
}
