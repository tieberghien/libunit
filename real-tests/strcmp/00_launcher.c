/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 08:56:18 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"
#include "libunit.h"

int		strcmp_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("STRCMP: \n");
	load_tests(&test_lst, "Basic test", &basic_test, &i);
	load_tests(&test_lst, "Unsigned  test", &unsigned_test, &i);	
	load_tests(&test_lst, "Null test", &null_test, &i);
	load_tests(&test_lst, "S1 greater test", &s1_greater_test, &i);
	load_tests(&test_lst, "S1 lower test", &s1_lower_test, &i);
	load_tests(&test_lst, "Only Space test", &only_space_test, &i);
	return (launch_tests(&test_lst, i));
	
}
