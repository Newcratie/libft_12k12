/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_strlcat.c                                  /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 18:14:31 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 18:16:03 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strnlen(char *str, int limit)
{
	unsigned int	i;

	i = 0;
	while (str[i] && limit > 0)
	{
		i++;
		limit--;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_src = 0;
	len_dest = ft_strnlen(dest,size);
	d = len_dest;
	while (src[len_src])
		len_src++;
	while (src[i] && d < size - 1)
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	return (len_dest + len_src);
}
