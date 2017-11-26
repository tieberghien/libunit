/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:00:41 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/26 22:30:20 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int			main(void)
{
	char	*res;

	while (42)
	{
		ft_putstr_fd("Launch test?\ny/n\n", 1);
		if (ft_strequ((res = get_input()), "y"))
			test_launcher();
		else
			break;
	}
	return (0);
}
