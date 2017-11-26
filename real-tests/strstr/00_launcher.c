/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 09:41:47 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// voir pour les includes
#include "libunit.h"

int		strstr_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("STRSTR: \n");
	load_test(&test_lst, "Basic test", &basic_test, &i);
	load_test(&test_lst, "Null test", &null_test, &i);
	load_test(&test_lst, "Space test", &space_test, &i);
	load_test(&test_lst, "Repeat word test", &repeat_word_test, &i);
	load_test(&test_lst, "Begin needle test", &begin_needle_test, &i);
	load_test(&test_lst, "No found test", &no_found_test, &i);
	return (launch_tests(&test_lst, i));
	
}
