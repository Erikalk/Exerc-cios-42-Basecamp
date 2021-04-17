/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:36:06 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 21:41:52 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str[] = "EitA GaleRe";

	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
