/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_map.c                                      /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/02 20:42:32 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/02 20:42:51 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*tab2;
	int		i;

	i = 0;
	if (!(tab2 = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}
