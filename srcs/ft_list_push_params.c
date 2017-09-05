/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_list_push_params.c                         /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/05 22:26:12 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/05 23:11:32 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int	i = 1;
	t_list	*list;

	list = NULL;
	if (ac == 1)
		return (NULL);
	while (av[i])
		ft_list_push_front(&list,av[i++]);
	return (list);
}
