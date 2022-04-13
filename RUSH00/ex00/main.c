/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogabr <joaogabr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:01:24 by joaogabr          #+#    #+#             */
/*   Updated: 2022/04/11 01:11:37 by joaogabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	atoi(char *s)
{
	int	acum;

	acum = 0;
	while ((*s >= '0') && (*s <= '9'))
	{
		acum = acum * 10;
		acum = acum + (*s - 48);
		s = s + 1;
	}
	return (acum);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		rush(atoi(argv[1]), atoi(argv[2]));
	}
	return (0);
}
