/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 08:12:36 by hozdemir          #+#    #+#             */
/*   Updated: 2022/10/18 08:13:34 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printf(const char *str, ...)
{
	va_list		arg;
	t_printfb	specter;

	va_start(arg, str);
	specter.rtn = 0;
	ft_reset(&specter);
	ft_check_arg(str, arg, &specter);
	va_end(arg);
	return (specter.rtn);
}
