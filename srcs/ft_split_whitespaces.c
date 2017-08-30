/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:28:08 by abbenham          #+#    #+#             */
/*   Updated: 2017/08/17 15:29:43 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define I_WHITE (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
#define J_WHITE (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')

char	*ft_dupli(char *str, int len)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char) * len + 1);
	while (I_WHITE)
		i++;
	while (j < len && !(I_WHITE))
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		ft_ptrlen(char *str)
{
	int		nb;
	int		i;
	int		j;

	nb = 0;
	i = 0;
	j = -1;
	if (!I_WHITE)
		nb++;
	while (str[i])
	{
		if (str[i] && (!I_WHITE) && J_WHITE)
			nb++;
		i++;
		j++;
	}
	return (nb);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	int		tab_len;
	int		wd_len;
	char	**split;

	i = 0;
	k = 0;
	wd_len = 0;
	tab_len = ft_ptrlen(str);
	split = malloc(sizeof(char*) * tab_len + 1);
	!(*str) ? tab_len = 0 : 0;
	while (k < tab_len)
	{
		i = i + wd_len;
		wd_len = ft_strlen(&str[i]);
		split[k] = ft_dupli(&str[i], wd_len);
		k++;
	}
	split[k] = 0;
	return (split);
}
