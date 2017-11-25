/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:01:29 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 21:51:18 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit	*create_test_unit(char *name_test, int (*f)(void))
{
	t_unit		*test;
	
	test = ft_malloc_check(sizeof(t_unit));
	test->test = ft_malloc_check(ft_strlen(name_test) + 1);
	if (!name_test || f == 0)
	{
		free(test->test);
		test->test = NULL;
		test->f = 0;
	}
	else
	{
		ft_memcpy(test->test, name_test, ft_strlen(name_test) + 1);
		test->f = f;
	}
	test->next = NULL;
	return (test);
}

void			load_tests(t_unit **lst, char *name_test, int (*f)(void), int *i)
{
	t_unit		*test;

	test = create_test_unit(name_test, f); 
	test->next = *lst;
	*lst = test;
	free(test);
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
	else if (WIFSIGNALED(pid))
	{
		if (WTERMSIG(pid) == SIGSEGV)
			ft_putendl("[SEGV]");
		else if (WTERMSIG(pid) == SIGBUS)
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
			exit (-1);
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
	free(tmp);
	ft_putnbr(res);
	ft_putstr(" / ");
	ft_putnbr(n_tests);
	ft_putstr(" test(s) passed");
	return (res == n_tests ? 0 : -1);
}
