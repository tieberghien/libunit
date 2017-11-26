/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 09:39:10 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"
#include "libunit.h"

int		strncat_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("STRNCAT: \n");
	load_tests(&test_lst, "Basic test", &basic_test, &i);
	load_tests(&test_lst, "Null test", &null_test, &i);
	load_tests(&test_lst, "Space test", &space_test, &i);
	return (launch_tests(&test_lst, i));
	
}
