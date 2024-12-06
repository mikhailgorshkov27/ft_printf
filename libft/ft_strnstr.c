/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:04:18 by mgorshko          #+#    #+#             */
/*   Updated: 2024/11/29 15:56:18 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;
	size_t	check_big;

	check_big = 0;
	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *)big);
	if (!*big || len < len_little)
		return (NULL);
	while (check_big < len)
	{
		i = check_big;
		j = 0;
		while (j < len_little && big[i] == little[j])
		{
			i++;
			j++;
		}
		if (j == len_little && check_big + j - 1 < len)
			return (&((char *)big)[check_big]);
		check_big++;
	}
	return (NULL);
}
