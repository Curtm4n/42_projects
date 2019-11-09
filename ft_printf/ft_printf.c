/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:56:23 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/09 14:56:43 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format ...)
{
	va_list	args;
	va_list args_cpy;

	va_start(args, format); //intialize args for future usages
	va_arg(args, type); //choppe l'argument suivant a chaque appel de cette fonction/macro
	//donc potentiellement apeller cette fonction dans la fonction de parsing afin de connaitre le type selon la ou les lettres suivant le format specifier "%"
	va_end(args) //close the arguments call and args become undefined and should not be used anymore
	va_copy(args_cpy, args); //do a copy of the facultative arguments
}
