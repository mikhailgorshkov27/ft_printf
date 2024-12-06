/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 05:51:17 by mgorshko          #+#    #+#             */
/*   Updated: 2024/11/27 08:04:59 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_str_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static	char	*ft_string(const char *s, char c)
{
	size_t	i;
	size_t	count_chars;
	char	*string;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	count_chars = i;
	string = malloc(sizeof(char) * (count_chars + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (i < count_chars)
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

static	void	*ft_free_split(char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free (split[i]);
	free (split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	count;
	char	**split;

	i = 0;
	start = 0;
	count = ft_str_count(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	while (i < count)
	{
		while (s[start] == c)
			start++;
		split[i] = ft_string(&s[start], c);
		if (!split[i])
			return (ft_free_split(split, count));
		while (s[start] && s[start] != c)
			start++;
		i++;
	}
	split[i] = NULL;
	return (split);
}
/*
#include <stdio.h>
int	main ()
{
	size_t	count;
	char *s = "  hello!   my   friend   ";
	char c = ' ';
	size_t i = 0;
	char **split;

	printf("word count = %zu\n", ft_str_count(s, c));
	count = ft_str_count(s, c);
	split = ft_split (s, c);  
	while (i < count)
	{
		printf("%s\n", split[i]);
		i++;
	}
}*/
