/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:16:25 by mgorshko          #+#    #+#             */
/*   Updated: 2024/12/06 17:27:15 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_i(int num)
{
	int count;
	char	*num_str;
	
	num_str = ft_itoa(num);
	count = (int)ft_strlen(num_str);
	ft_putstr_fd(num_str, 1);
	free(num_str);
	return (count);
}
