/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:38:54 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/15 15:06:59 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int 	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 42;
	b = 12;
	div = &a;
	mod = &b;

	printf("a igual a %d\n", a);
	printf("b igual a %d\n", b);
	ft_div_mod(a, b, div, mod);
	printf("a igual a %d\n", a);
	printf("b igual a %d\n", b);
}
