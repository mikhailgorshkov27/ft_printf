/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:40:31 by mgorshko          #+#    #+#             */
/*   Updated: 2024/11/27 12:43:47 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_digit_count(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static	int	ft_power_ten(int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= 10;
		power--;
	}
	return (result);
}

static	int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	count;
	size_t	i;

	count = ft_digit_count(n);
	i = 0;
	number = malloc(sizeof(char) * (count + 1));
	if (!number)
		return (NULL);
	if (n < 0)
	{
		number[i++] = '-';
		count--;
	}
	while (count > 0)
	{
		number[i] = ft_abs(n / ft_power_ten(--count)) + 48;
		n = ft_abs(n % ft_power_ten(count));
		i++;
	}
	number[i] = '\0';
	return (number);
}
/*
#include <stdio.h>
int main ()
{
	printf("%s\n", ft_itoa(1234));
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));

}*/
