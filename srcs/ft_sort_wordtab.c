/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_sort_wordtab.c                             /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/02 21:13:19 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/02 21:40:06 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabcmp2(char *s1, char *s2)
{
	int		i;
	int		diff;

	i = 0;
	diff = 0;
	while (s1[i] || s2[i])
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			break ;
		i++;
	}
	return (diff);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	k = 0;
	i = 0;
	j = 0;
	while (tab[k])
		k++;
	while (tab[i])
	{
		j = 0;
		while (j < k - 1)
		{
			if (0 < ft_tabcmp2(tab[j], tab[j + 1]))
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
