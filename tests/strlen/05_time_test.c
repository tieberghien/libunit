/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_time_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:52:06 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/26 18:33:30 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <time.h>

int			timeout_test(void)
{
	int		i;

	while (1)
	{
		i = ft_strlen("dfkhdfkjg");
		if (sleep(3))
			return (0);
		else
			return (-1);
	}
}
