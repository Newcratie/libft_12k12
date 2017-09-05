/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_list_size.c                                /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/05 18:17:50 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/05 18:34:32 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "libft.h"

 int ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	return (1 + ft_list_size(begin_list->next));
}
