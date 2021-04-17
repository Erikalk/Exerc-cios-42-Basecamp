/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:44:59 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 18:51:28 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char destino[10];
	char source[10] = "Baladinha";
	int i;

	i = 0;
	while (source[i] != '\0')
	{
		printf("%c", source[i]);
		i++;
	}
	ft_strcpy(destino, source);
	i = 0;
	while (destino[i] != '\0')
	{
		printf("%c", destino[i]);
		i++;
	}
}
