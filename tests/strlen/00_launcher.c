/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:43:16 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/26 17:49:37 by etieberg         ###   ########.fr       */
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
	load_tests(&test_lst, "OK test", &ok_test, &i);
	load_tests(&test_lst, "KO test", &ko_test, &i);
	load_tests(&test_lst, "SEGV test", &segv_test, &i);
	load_tests(&test_lst, "BUSE test", &buse_test, &i);
	load_tests(&test_lst, "TIMEOUT test", &timeout_test, &i);
	return (launch_tests(&test_lst, i));
}
