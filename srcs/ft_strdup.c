/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_strdup.c                                   /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/08/29 23:55:09 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 18:27:10 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char*)malloc(sizeof(char) * ft_strlen(src) + sizeof(char));
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
