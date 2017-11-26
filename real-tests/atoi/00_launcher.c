/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 17:39:41 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int		atoi_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("ATOI: \n");
	load_tests(&test_lst, "Basic test", &basic_test, &i);
	load_tests(&test_lst, "Null test", &null_test, &i);	
	load_tests(&test_lst, "Negative number test", &negative_number_test, &i);
	load_tests(&test_lst, "Negative int min test", &negative_int_min_test, &i);
	load_tests(&test_lst, "Double negative test", &double_negative_test, &i);
	load_tests(&test_lst, "Double positive test", &double_positive_test, &i);
	load_tests(&test_lst, "Only space test", &only_space_test, &i);	
	load_tests(&test_lst, "Space with number test", &space_with_number_test, &i);
	load_tests(&test_lst, "Only letter  test", &only_letter_test, &i);
	load_tests(&test_lst, "Number and letter test", &number_and_letter_test, &i);
	load_tests(&test_lst, "One positive test", &one_positive_test, &i);
	return (launch_tests(&test_lst, i));
	
}
