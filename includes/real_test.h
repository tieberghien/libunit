/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:15:26 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 17:45:22 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TEST_H
# define REAL_TEST_H

# include "libunit.h"
# include "libft.h"

int		atoi_launcher(void);
int		isalpha_launcher(void);
int		isdigit_launcher(void);
int		memchr_launcher(void);
int		memcpy_launcher(void);
int		memset_launcher(void);
int		strcat_launcher(void);
int		strcmp_launcher(void);
int		strcpy_launcher(void);
int		strdup_launcher(void);
int		strlen_launcher(void);
int		strncat_launcher(void);
int		strstr_launcher(void);
int		tolower_launcher(void);
int		toupper_launcher(void);
int		basic_test(void);
int		null_test(void);
int		negative_number_test(void);
int		negative_int_min_test(void);
int		double_negative_test(void);
int		double_positive_test(void);
int		only_space_test(void);
int		space_with_number_test(void);
int		only_letter_test(void);
int		number_and_letter_test(void);
int		one_positive_test(void);
int		digit_test(void);
int		upperletter_test(void);
int		space_test(void);
#endif