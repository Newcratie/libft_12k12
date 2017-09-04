/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_oper.c                                     /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 19:03:20 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 19:04:20 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

int		ft_oper(int x, int y, int (*f)(int, int))
{
		return (f(x, y));
}

int		ft_add(int x, int y)
{
	return (x + y);
}

int		ft_sub(int x, int y)
{
	return (x - y);
}

int		ft_mul(int x, int y)
{
	return (x * y);
}

int		ft_div(int x, int y)
{
	return (x / y);
}

int		ft_mod(int x, int y)
{
	return (x % y);
}
