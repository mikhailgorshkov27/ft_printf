/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:23:48 by mgorshko          #+#    #+#             */
/*   Updated: 2024/11/22 16:57:44 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;

	if (nmemb != 0 && size > 2147483647 / nmemb)
		return (NULL);
	point = (void *)malloc(nmemb * size);
	if (!point)
		return (NULL);
	ft_bzero(point, nmemb * size);
	return (point);
}
