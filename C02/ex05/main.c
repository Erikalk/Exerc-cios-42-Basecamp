/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:22:17 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 21:25:52 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);
int		main(void)
{
	char *ana = "pamonha";
	char *number = "ABC";
	char *mix = "pamONHA";
	int a;
	int b;
	int c;

	a = ft_str_is_uppercase(ana);
	b = ft_str_is_uppercase(number);
	c = ft_str_is_uppercase(mix);

	printf ("%d\n", a);
	printf ("%d\n", b);
	printf ("%d\n", c);
	return (0);
}
