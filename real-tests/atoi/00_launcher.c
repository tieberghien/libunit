/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 18:42:14 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// voir pour les includes
#include "libunit.h"

int		atoi_launcher(void)
{
	int				i;
	t_unit_test		*testlist;

	i = 0;
	ft_putstr("ATOI:");
	load_test(&testlist, "Basic test", &basic_test, &i);
	load_test(&testlist, "Null test", &null_test, &i);	
	load_test(&testlist, "Negative number test", &negative_number_test, &i);
	load_test(&testlist, "Negative int min test", &negative_int_min_test, &i);
	load_test(&testlist, "Double negative test", &double_negative_test, &i);
	load_test(&testlist, "Double positive test", &double_positive_test, &i);
	load_test(&testlist, "Only space test", &only_space_test, &i);	
	load_test(&testlist, "Space with number test", &space_with_number_test, &i);
	load_test(&testlist, "Only letter  test", &only_letter_test, &i);
	load_test(&testlist, "Number and letter test", &number_and_letter_test, &i);
	load_test(&testlist, "One positive test", &one_positive_test, &i);
	return (launch_tests(&testlist, i));
	
}
