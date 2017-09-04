/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_list.h                                     /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/04 19:59:13 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/04 20:01:44 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
typedef	struct		s_list
{
	void		*data;
	struct s_list 	*next;
}			t_list;
#endif