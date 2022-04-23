/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogabr <joaogabr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:03:05 by joaogabr          #+#    #+#             */
/*   Updated: 2022/04/13 10:29:48 by joaogabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_validator(char i, char j, char k)
{
	if (i == '7' && j == '8' && k == '9')
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
	}
	else
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_validator(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
