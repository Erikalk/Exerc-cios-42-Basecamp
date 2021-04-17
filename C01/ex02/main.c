/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:22:32 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/15 00:46:33 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int 	main(void)
{
	int a;
	int b;

	a = 7;
	b = 21;

	printf("o valor de a é igual a %d\n", a);
	printf("o valor de b é igual a %d\n", b);
	ft_swap(&a, &b);
	printf("o valor de a é igual a %d\n", a);
	printf("o valor de b é igual a %d\n", b);
}
