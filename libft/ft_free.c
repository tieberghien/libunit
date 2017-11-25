/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 07:51:08 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/02 07:52:01 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	double_free(char **av)
{
	int	i;

	i = -1;
	if (av)
	{
		while (av[++i])
			free(av[i]);
		free(av);
	}
}