/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_print_sort_params.c                        /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 17:53:36 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 17:57:36 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_str_cmp(char *s1, char *s2)
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

void	ft_print_sort_params(int argc, char **argv)
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
}
