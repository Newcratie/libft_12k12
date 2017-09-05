/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_list_push_front.c                          /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/05 13:51:01 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/05 14:36:56 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "libft.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;
	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
}
