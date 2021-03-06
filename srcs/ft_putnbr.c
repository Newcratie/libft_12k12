/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                   /  (___\      /  (___\     */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 14:32:48 by abbenham          #+#    #+#             */
/*   Updated: 2017/09/05 18:42:32 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_int_min(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_put_int_min("-2147483648\0");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + 48);
	}
}

void	ft_nbrendl(int nb)
{
	ft_putnbr(nb);
	ft_putchar('\n');
}
