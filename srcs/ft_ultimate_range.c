/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_ultimate_range.c                           /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/08/30 00:17:00 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/08/30 00:17:30 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ultimate_range(int **range, int min, int max)
{
	int	rg;
	int	i;

	if (!(min < max))
		return (0);
	rg = max - min;
	i = 0;
	*range = malloc(sizeof(int) * rg + 1);
	while (i <= rg)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (rg);
}
