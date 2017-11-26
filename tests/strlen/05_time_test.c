/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_time_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:52:06 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/26 17:49:40 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <time.h>

int		timeout_test(void)
{
	time_t start = time();
	while (42)
		;
	if (time() > start + 5)
		return (0);
	else
		return (-1);
}
