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

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			cpt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cpt);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char	**tab;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	tab = malloc(sizeof(char) * (ft_count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j][k] = s[i];
			k++;
		}
		else if (k > 0)
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	if (k > 0)
	{
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = '\0';
	return (tab); 
}

int	main()
{
	char	*tab = "ouss|ama|amarkouch";
	char	**res;

	ft_split(tab, '|');
	int	i = 0;
	while (i < 3)
	{
		printf ("%s\n", res[i]);
		i++;
	}
}
