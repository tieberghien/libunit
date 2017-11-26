/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 08:50:40 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// voir pour les includes
#include "libunit.h"

int		memset_launcher(void)
{
	int				i;
	t_unit		*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("MEMSET: \n");
	load_test(&test_lst, "Basic test", &basic_test, &i);
	return (launch_tests(&test_lst, i));
	
}
