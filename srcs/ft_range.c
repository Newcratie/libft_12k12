/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_range.c                                    /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 11:57:03 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 12:02:19 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int*)malloc(sizeof(int) * size + 1);
	while (i < size)
		range[i++] = min++;
	return (range);
}
