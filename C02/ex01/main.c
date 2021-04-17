/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:27:41 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 18:51:35 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char destino[10];
	char source[10] = "Baladinha";
	int i;
	unsigned int n;

	n = 7;
	i = 0;
	while (source[i] != '\0')
	{
		printf("%c", source[i]);
		i++;
	}
	ft_strncpy(destino, source, n);
	i = 0;
	while (destino[i] != '\0')
	{
		printf("%c", destino[i]);
		i++;
	}
}