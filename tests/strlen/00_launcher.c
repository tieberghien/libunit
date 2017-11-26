/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:43:16 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/26 22:30:53 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int			test_launcher(void)
{
	int		i;
	t_unit	*test_lst;

	i = 0;
	test_lst = NULL;
	ft_putstr("TEST: \n");
	load_tests(&test_lst, "\t> OK test", &ok_test, &i);
	load_tests(&test_lst, "\t> KO test", &ko_test, &i);
	load_tests(&test_lst, "\t> SEGV test", &segv_test, &i);
	load_tests(&test_lst, "\t> BUSE test", &buse_test, &i);
	load_tests(&test_lst, "\t> TIMEOUT test", &timeout_test, &i);
	load_tests(&test_lst, "\t> ABORT test", &abort_test, &i);
	return (launch_tests(&test_lst, i));
}
