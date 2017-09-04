/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_do_op_sp_case.c                            /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 21:09:14 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 21:09:35 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_forest(int ac, char **av)
{
	int		flag;

	flag = 0;
	if (ac != 4 || ft_strlen(av[2]) != 1)
	{
		flag++;
		ft_putnbr(0);
	}
	if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		flag++;
	}
	if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		flag++;
	}
	return (flag);
}
