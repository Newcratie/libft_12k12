/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_concat_params.c                            /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/08/30 01:45:30 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/08/30 01:45:33 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char		*concat;

	i = 1;
	j = 0;
	k = 0;
	concat = malloc(sizeof(char) * ft_megalen(argc, argv) + sizeof(char));
	if (argc == 1 || !(argv[1][0]))
		return ("\0");
	while (argv[++j] && !(i = 0))
	{
		while (argv[j][i])
			concat[k++] = argv[j][i++];
		concat[k++] = '\n';
	}
	concat[k] = '\0';
	return (concat);
}
