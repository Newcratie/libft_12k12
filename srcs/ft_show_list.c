/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_show_list.c                                /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/05 14:43:15 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/05 23:01:56 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

void	ft_show_list(t_list *first)
{
	while (first)
	{
		ft_putendl(first->data);
		first = first->next;
	}
}
