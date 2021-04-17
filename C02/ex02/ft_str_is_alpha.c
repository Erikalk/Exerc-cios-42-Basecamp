/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-e <ealves-e@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:55:35 by ealves-e          #+#    #+#             */
/*   Updated: 2021/04/16 22:20:40 by ealves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'A' && str[cont] <= 'Z') ||
		(str[cont] >= 'a' && str[cont] <= 'z'))
			cont++;
		else
			return (0);
	}
	return (1);
}
