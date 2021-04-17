/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:18:40 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 22:33:03 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'a' && str[cont] <= 'z'))
			cont++;
		else
			return (0);
	}
	return (1);
}
