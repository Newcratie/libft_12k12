/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                              /  (___\      /  (___\     */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 04:10:04 by abbenham          #+#    #+#             */
/*   Updated: 2017/08/30 13:56:45 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (s1[i] - s2[i]);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	ft_sort_params(int argc, char **argv)
{
	char	*tmp;
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i;
		while (ft_str_cmp(argv[j], argv[j + 1]) > 0 && j >= 0)
		{
			tmp = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = tmp;
			j--;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
