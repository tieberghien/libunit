/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 09:36:55 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"
#include "libunit.h"

int		strdup_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("STRDUP: \n");
	load_tests(&test_lst, "Basic test", &basic_test9, &i);
	load_tests(&test_lst, "Null test", &null_test9, &i);
	load_tests(&test_lst, "No memory test", &no_memory_test, &i);
	load_tests(&test_lst, "free test", &free_test, &i);
	return (launch_tests(&test_lst, i));
	
}
