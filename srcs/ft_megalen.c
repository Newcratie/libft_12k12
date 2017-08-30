/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_megalen.c                                  /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/08/30 00:51:39 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/08/30 00:52:36 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_megalen(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	else
		return (ft_strlen(argv[0]) + ft_megalen(argc - 1, &argv[1]));
	return (0);
}
