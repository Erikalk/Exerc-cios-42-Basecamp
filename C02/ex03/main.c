/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:05:09 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 21:07:22 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);
int		main(void)
{
	char *ana = "pamonha";
	char *number = "234";
	char *mix = "pam98";
	int a;
	int b;
	int c;

	a = ft_str_is_numeric(ana);
	b = ft_str_is_numeric(number);
	c = ft_str_is_numeric(mix);

	printf ("%d\n", a);
	printf ("%d\n", b);
	printf ("%d\n", c);
	return (0);
}
