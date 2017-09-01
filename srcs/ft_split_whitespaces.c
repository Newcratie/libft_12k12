/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_split_whitespaces.c                        /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 16:17:01 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 16:17:04 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define I_WHITE (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
#define J_WHITE (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')

char			*ft_wordup(char *str, int len)
{
	int		i;
	int		j;
	char		*dest;

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

int		ft_wd_len(char *str)
{
	int		i;

	i = 0;
	while (I_WHITE)
		i++;
	while (str[i] && !(I_WHITE))
		i++;
	return (i);
}


int			ft_tablen(char *str)
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

char			**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	int		tab_len;
	int		wd_len;
	char		**split;

	i = 0;
	k = 0;
	wd_len = 0;
	tab_len = ft_tablen(str);
	split = (char**)malloc(sizeof(char*) * tab_len + sizeof(char*));
	!(*str) ? tab_len = 0 : 0;
	while (k < tab_len)
	{
		wd_len = ft_wd_len(&str[i += wd_len]);
		split[k++] = ft_wordup(&str[i], wd_len);
	}
	split[k] = 0;
	return (split);
}
