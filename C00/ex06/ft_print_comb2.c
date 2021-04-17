/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:41:49 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/13 22:14:30 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_calc(int a)
{
	char div;
	char mod;

	div = a / 10 + '0';
	mod = a % 10 + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	n2 = n1 + 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			ft_print_calc(n1);
			write(1, " ", 1);
			ft_print_calc(n2);
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
