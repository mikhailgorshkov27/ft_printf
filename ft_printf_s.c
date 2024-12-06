/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:23:47 by mgorshko          #+#    #+#             */
/*   Updated: 2024/12/06 16:33:35 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_s(char *str)
{
	int	count;
	
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}
