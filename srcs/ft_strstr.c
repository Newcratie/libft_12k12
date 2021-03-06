/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_strstr.c                                   /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 18:24:46 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 18:24:53 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

int		ft_cmp(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str1[i] == str2[j])
	{
		if (str2[j + 1] == '\0')
			return (1);
		i++;
		j++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			if (1 == ft_cmp(str + i, to_find + j))
				return (&str[i]);
		}
		i++;
	}
	return ("(null)");
}
