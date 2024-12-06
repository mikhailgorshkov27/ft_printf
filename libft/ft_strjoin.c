/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:07 by mgorshko          #+#    #+#             */
/*   Updated: 2024/11/22 18:29:26 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	i;
	size_t	j;

	if (ft_strlen(s1) + ft_strlen(s2) == 0)
		sjoin = malloc(1);
	else
		sjoin = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!sjoin)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
	{
		sjoin[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		sjoin[i] = s2[j];
		j++;
		i++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}
