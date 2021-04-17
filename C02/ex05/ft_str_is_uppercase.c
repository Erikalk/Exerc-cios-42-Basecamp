/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:22:12 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 22:36:13 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'A' && str[cont] <= 'Z'))
			cont++;
		else
			return (0);
	}
	return (1);
}
