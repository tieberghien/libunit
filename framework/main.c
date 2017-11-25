/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:01:29 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 18:20:04 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit	*create_test_unit(char *name_test, int (*f)(void))
{
	t_unit		*test;

	if (!(test = (t_unit*)malloc(sizeof(t_unit))))
		return (NULL);
	test->test = ft_strdup(name_test);
	test->f = f;
	test->next = NULL;
	return (test);
}

void			load_tests(t_unit **lst, char *name_test, int (*f)(void), int *i)
{
	t_unit		*test;

	test = create_test_unit(name_test, f); 
	test->next = *lst;
	*lst = test;
	(*i)++;
}

static int		display_res(pid_t pid)
{
	if (WIFEXITED(pid))
	{
		if (pid == 0)
			colourize(GREEN, "[OK]");
		else if (pid == 256)
		{
			colourize(RED, "[KO]");
			return (-1);
		}
	}
	else if (WIFSTOPPED(pid))
	{
		if (pid == SIGSEGV)
			ft_putendl("[SEGV]");
		else if (pid == SIGBUS)
			ft_putendl("[BUSE]");
		return (-1);
	}
	return (0);
}

static int		exec_tests(int (f)(void))
{
	pid_t		pid;

	if ((pid = fork()) == 0)
	{
			if (f() == 0)
				exit (0);
			exit (1);
	}
	if (pid > 0)
		wait(&pid);
	return (display_res(pid));
}

int				launch_tests(t_unit **tests, int n_tests)
{
	int			res;
	t_unit		*tmp;

	res = 0;
	tmp = *tests;
	while (tmp)
	{
		ft_putstr(tmp->test);
		ft_putstr(" : ");
		if (exec_tests(tmp->f) == 0)
			res++;
		tmp = tmp->next;
	}
	ft_putnbr(res);
	ft_putstr(" / ");
	ft_putndr(n_tests);
	ft_putstr(" test(s) passed");
	return (res == n_tests ? 0 : -1);
}
