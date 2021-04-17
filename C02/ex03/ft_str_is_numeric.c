/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:05:04 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 22:29:48 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= '0' && str[cont] <= '9'))
			cont++;
		else
			return (0);
	}
	return (1);
}
