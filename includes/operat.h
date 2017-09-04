/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   operat.h                                      /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 21:28:03 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 21:28:25 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERAT_H
# define OPERAT_H
# include "libft.h"

typedef struct	s_ope
{
	char	sign;
	int		(*f)(int, int);
}				t_ope;

t_ope g_ope[] = {

	{'+', &ft_add},
	{'-', &ft_sub},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod}
};

#endif
