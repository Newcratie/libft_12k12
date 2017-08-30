/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   libft.h                                       /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: link <marvin@42.fr>                       | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/08/29 23:23:55 by link          |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/08/30 01:43:46 by link                                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

//string
void		ft_putchar(char c);
void		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_megalen(int argc, char **argv);
char		*ft_concat_params(int argc, char **argv);

//numbers
void		ft_putnbr(int nb);
int		ft_atoi(char *str);

//int tab
int		ft_ultimate_range(int **range, int min, int max);

//Math
int		ft_is_prime(int nb);
int		ft_fibonacci(int index);
#endif
