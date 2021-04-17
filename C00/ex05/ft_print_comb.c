/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:59:03 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/13 22:10:28 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numero[3];

	numero[0] = '0';
	while (numero[0] <= '7')
	{
		numero[1] = numero[0] + 1;
		while (numero[1] <= '8')
		{
			numero[2] = numero[1] + 1;
			while (numero[2] <= '9' && numero[2] > numero[1])
			{
				write(1, numero, 3);
				if (!(numero[0] == '7' && numero[1] == '8' && numero[2] == '9'))
					write(1, ", ", 2);
				numero[2]++;
			}
			numero[1]++;
		}
		numero[0]++;
	}
}
