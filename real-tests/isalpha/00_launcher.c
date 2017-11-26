/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 08:42:29 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// voir pour les includes
#include "libunit.h"

int		isalpha_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("ISALPHA: \n");
	load_test(&test_lst, "Basic test", &basic_test, &i);
	load_test(&test_lst, "Digit test", &digit_test, &i);	
	load_test(&test_lst, "Upperletter test", &upperletter_test, &i);
	load_test(&test_lst, "Null test", &null_test, &i);
	load_test(&test_lst, "Space test", &space_test, &i);
	return (launch_tests(&test_lst, i));
	
}