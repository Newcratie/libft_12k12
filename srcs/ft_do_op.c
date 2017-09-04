/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_do_op.c                                    /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 21:13:45 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 21:14:00 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "operat.h"
#include "libft.h"

void		ft_do_op(int argc, char **argv)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	if (ft_forest(argc, argv) == 0)
	{
		while (i < 5)
		{
			if (g_ope[i].sign == argv[2][0])
				res = ft_oper(ft_atoi(argv[1]), ft_atoi(argv[3]), g_ope[i].f);
			i++;
		}
		ft_putnbr(res);
	}
}
