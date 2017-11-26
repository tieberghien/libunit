/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:36:14 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"
#include "libunit.h"

int		toupper_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("TOUPPER: \n");
	load_tests(&test_lst, "Basic test", &basic_test3, &i);
	load_tests(&test_lst, "Digit test", &digit_test3, &i);	
	load_tests(&test_lst, "Upperletter test", &upperletter_test, &i);
	load_tests(&test_lst, "Null test", &null_test3, &i);
	load_tests(&test_lst, "Letter and digit test", &letter_and_digit_test, &i);
	load_tests(&test_lst, "Space test", &space_test3, &i);
	return (launch_tests(&test_lst, i));
	
}
