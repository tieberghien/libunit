/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_time_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:52:06 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 19:53:11 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		timeout_test(void)
{
	while (42)
		;
	if (0)
		return (0);
	else
		return (-1);
}
