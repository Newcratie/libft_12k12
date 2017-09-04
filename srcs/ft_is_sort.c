/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_is_sort.c                                  /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/02 20:50:19 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/04 20:07:01 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		flag1;
	int		flag2;

	i = 0;
	flag1 = 1;
	flag2 = 1;
	while (i < length-1)
	{
		if (0 > f(tab[i],tab[i+1]))
			flag1 = 0;
		if (0 < f(tab[i],tab[i + 1]))
			flag2 = 0;
		i++;
	}
	return (flag1 == 1 || flag2 == 1);
}
