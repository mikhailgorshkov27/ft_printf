/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:32:12 by mgorshko          #+#    #+#             */
/*   Updated: 2024/12/06 17:24:21 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *, ...);
int ft_count(const char *);
int ft_printf_c(int);
int ft_printf_s(char *);
int ft_printf_i(int);

#endif
