/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:21:27 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/15 19:41:16 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str = "Elvira";
	int contagem;

	contagem = ft_strlen(str);
	printf("%d\n", contagem);
}
