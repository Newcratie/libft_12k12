/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_create_elem.c                              /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/04 20:09:54 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/05 09:59:28 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*list;
	list = (struct s_list*)malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return(list);
}
