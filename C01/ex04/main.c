/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:15:01 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/15 15:29:15 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 6;
	b = 3;

	printf("a igual a %d\n", a);
	printf("b igual a %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a igual a %d\n", a);
	printf("b igual a %d\n", b);
}
