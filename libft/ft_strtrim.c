/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:01:12 by mgorshko          #+#    #+#             */
/*   Updated: 2024/11/26 18:03:28 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_start_index(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
	{
		start++;
	}
	return (start);
}

static size_t	ft_end_index(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (end > 0 && s1[end] && is_in_set(s1[end], set))
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*copy;
	size_t	start_i;
	size_t	end_i;
	size_t	len;

	i = 0;
	start_i = ft_start_index(s1, set);
	end_i = ft_end_index(s1, set);
	if (end_i < start_i)
		len = 0;
	else
		len = end_i - start_i + 1;
	copy = malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (start_i <= end_i && len > 0)
	{
		copy[i] = s1[start_i];
		i++;
		start_i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strtrim("hello!", "z"));
}*/
