/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:04:18 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/13 21:39:07 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char reverse_alphabet;

	reverse_alphabet = 'z';
	while (reverse_alphabet >= 'a')
	{
		write(1, &reverse_alphabet, 1);
		reverse_alphabet--;
	}
}
