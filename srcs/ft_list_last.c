/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_list_last.c                                /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/05 18:44:46 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/05 22:19:12 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "libft.h"

t_list		*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);
	if (!begin_list->next)
		return (begin_list);
	else if (begin_list->next)
		return (ft_list_last(begin_list->next));
	return (NULL);
}
