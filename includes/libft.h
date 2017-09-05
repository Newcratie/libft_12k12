/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   libft.h                                       /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/08/31 15:34:32 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/05 22:27:37 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "ft_list.h"

//string
void		ft_putchar(char c);
void		ft_swap(int *a, int *b);
void		ft_putstr(char *str);
void		ft_putendl(char *str);
char		*ft_strrev(char *str);
char		*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
unsigned int	ft_strnlen(char *str, int limit);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strupcase(char *str);
char		*ft_strcapitalize(char *str);

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

char		*ft_strdup(char *src);

char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

//2dtab
int		ft_megalen(int argc, char **argv);
char		*ft_concat_params(int argc, char **argv);
char		**ft_split_whitespaces(char *str);
void		ft_print_words_tables(char **tab);
void		ft_print_rev_params(int argc, char **argv);
void		ft_print_sort_params(int argc, char **argv);
int		ft_any(char **tab, int (*f)(char*));
int		ft_count_if(char **tab, int (*f)(char*));
void		ft_sort_wordtab(char **tab);
void 		ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));

//numbers
void		ft_putnbr(int nb);
void		ft_nbrendl(int nb);
int		ft_atoi(char *str);
int		ft_is_sort(int *tab, int length, int (*f)(int, int));

//int tab
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
void		ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));

//Math
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);

void		ft_do_op(int argc, char **argv);
int		ft_forest(int ac, char **av);
int		ft_oper(int x, int y, int (*f)(int, int));
int		ft_add(int x, int y);
int		ft_sub(int x, int y);
int		ft_mul(int x, int y);
int		ft_div(int x, int y);
int		ft_mod(int x, int y);
int		ft_add100(int nb);

//liste chainés
void		ft_show_list(t_list *first);
t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);
void		ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list		*ft_list_last(t_list *begin_list);
t_list		*ft_list_push_params(int ac, char **av);
#endif
