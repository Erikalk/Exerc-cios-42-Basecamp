/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:55:41 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 22:23:17 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);
int		main(void)
{
	char *ana = "pamonha";
	char *number = "234";
	char *mix = "pam98";
	char *empty = "";
	int a;
	int b;
	int c;
	int d;

	a = ft_str_is_alpha(ana);
	b = ft_str_is_alpha(number);
	c = ft_str_is_alpha(mix);
	d = ft_str_is_alpha(empty);

	printf ("%d\n", a);
	printf ("%d\n", b);
	printf ("%d\n", c);
	printf ("%d\n", d);
	return (0);
}
