/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:13:59 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"
#include "libunit.h"

int		isalpha_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("ISALPHA: \n");
	load_tests(&test_lst, "Basic test", &basic_test1, &i);
	load_tests(&test_lst, "Digit test", &digit_test1, &i);	
	load_tests(&test_lst, "Upperletter test", &upperletter_test1, &i);
	load_tests(&test_lst, "Null test", &null_test1, &i);
	load_tests(&test_lst, "Space test", &space_test1, &i);
	return (launch_tests(&test_lst, i));
	
}
