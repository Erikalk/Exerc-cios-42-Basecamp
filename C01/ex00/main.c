/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:38:50 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/14 20:48:08 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int zezinho;
	zezinho = 10;

	printf("%d \n", zezinho);
	ft_ft(&zezinho);
	printf("%d \n", zezinho);
}
