/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:42:05 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/24 10:35:52 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **split, size_t index)
{
	while (index > 0)
	{
		index--;
		free(split[index]);
	}
}

static char	**ft_fill(char **split, char const *s, char c)
{
	size_t	index;
	size_t	i;
	size_t	j;

	index = 0;
	i = 0;
	j = 0;
	while (s[index])
	{
		if (s[index] != c)
		{
			split[i][j++] = s[index];
		}
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
		{
			split[i][j] = '\0';
			i++;
			j = 0;
		}
		index++;
	}
	return (split);
}

static char	**ft_word(char **split, char const *s, char c)
{
	size_t	i;
	size_t	index;
	size_t	nb_word;

	i = 0;
	index = 0;
	nb_word = 0;
	while (s[i])
	{
		if (s[i] != c)
			nb_word++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			split[index] = malloc(nb_word + 1);
			if (split[index] == NULL)
				return (ft_free(split, index), NULL);
			nb_word = 0;
			index++;
		}
		i++;
	}
	return (split);
}

static size_t	ft_countstring(char const *s, char c)
{
	size_t	i;
	size_t	nb_string;

	i = 0;
	nb_string = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			nb_string++;
		i++;
	}
	return (nb_string);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	nb_strings;

	if (!s || *s == '\0')
	{
		split = malloc(sizeof(char *));
		if (!split)
			return (NULL);
		split[0] = NULL;
		return (split);
	}
	nb_strings = ft_countstring(s, c);
	split = malloc(sizeof(char *) * (nb_strings + 1));
	if (!split)
		return (NULL);
	split[nb_strings] = NULL;
	if (!ft_word(split, s, c))
		return (free(split), NULL);
	if (!ft_fill(split, s, c))
	{
		ft_free(split, nb_strings);
		return (free(split), NULL);
	}
	return (split);
}
/*
int	main(void)
{
	char **split;
	split = ft_split("Ouss-ama-rkouch", '-');
}
*/
