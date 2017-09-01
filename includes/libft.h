/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   libft.h                                       /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/08/31 15:34:32 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 18:02:37 by Karim                                    */
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
void		ft_putendl(char *str);
int		ft_strlen(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);

//2dtab
int		ft_megalen(int argc, char **argv);
char		*ft_concat_params(int argc, char **argv);
char		**ft_split_whitespaces(char *str);
void		ft_print_words_tables(char **tab);
void		ft_print_rev_params(int argc, char **argv);
void		ft_print_sort_params(int argc, char **argv);

//numbers
void		ft_putnbr(int nb);
int		ft_atoi(char *str);

//int tab
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);

//Math
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
#endif
