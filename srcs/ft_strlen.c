/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_strlen.c                                   /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 14:44:12 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 14:44:19 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
