/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moo.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecross <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:05:07 by ecross            #+#    #+#             */
/*   Updated: 2020/01/22 12:17:03 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <locale.h>

# define PRINT printf("%d --> ", count++); printf

int count;

int main(int argc, char **v)
{
	(void)argc;
	(void)v;

	count = 1;

	setlocale(LC_NUMERIC, "en_GB");

	/*printe ' flae with:*/
	PRINT("this %e float\n", 1.5);
	PRINT("%e\n", 7.5);
	PRINT("%e\n", 1.0);
	PRINT("%e\n", -3.85);
	PRINT("%e\n", 573.924);
	PRINT("%e\n", -958.125);
	PRINT("%e\n", 23.00041);
	PRINT("%e\n", 0.000039);
	PRINT("%e\n", -7.00036);
	PRINT("%e\n", -0.00032);
	PRINT("%e\n", 0.000001);
	PRINT("%e\n", -0.000001);
	PRINT("%e\n", 9873.000001);
	PRINT("%e\n", -875.000001);
	PRINT("%e\n", 999.999999);
	PRINT("%e\n", -99.999999);
	PRINT("%e\n", 0.999999);
	PRINT("%e\n", -0.999999);
	PRINT("%e\n", 23.375094499);
	PRINT("%e\n", -985.765426499);
	PRINT("%e\n", 0.0894255);
	PRINT("%e\n", -56.2012685);
	PRINT("%e\n", 43.4399999);
	PRINT("%e\n", -5.0299999);
	PRINT("%e\n", 43.43999949);
	PRINT("%e\n", -5.02999949);
	PRINT("%e\n", 1.99999949);
	PRINT("%e\n", -0.99999949);
	PRINT("%e\n", 3.9999999);
	PRINT("%e\n", -5.9999999);
	PRINT("this %.0e float\n", 1.6);
	PRINT("%.0e\n", 7.4);
	PRINT("%.0e\n", 1.0);
	PRINT("%.0e\n", -3.85);
	PRINT("%.0e\n", 573.924);
	PRINT("%.0e\n", -958.125);
	PRINT("%.0e\n", 23.00041);
	PRINT("%.0e\n", 0.000039);
	PRINT("%.0e\n", -7.00036);
	PRINT("%.0e\n", -0.00032);
	PRINT("this %.1e float\n", 1.5);
	PRINT("%.1e\n", 7.5);
	PRINT("%.1e\n", 1.0);
	PRINT("%.1e\n", -3.85);
	PRINT("%.1e\n", 573.924);
	PRINT("%.1e\n", -958.125);
	PRINT("%.1e\n", 23.00041);
	PRINT("%.1e\n", 0.000039);
	PRINT("%.1e\n", -7.00036);
	PRINT("%.1e\n", -0.00032);
	PRINT("this %.3e float\n", 1.5);
	PRINT("%.3e\n", 7.5);
	PRINT("%.3e\n", 1.0);
	PRINT("%.3e\n", -3.85);
	PRINT("%.3e\n", 573.924);
	PRINT("%.3e\n", -958.125);
	PRINT("%.3e\n", 23.00041);
	PRINT("%.3e\n", 0.000039);
	PRINT("%.3e\n", -7.00036);
	PRINT("%.3e\n", -0.00032);
	PRINT("this %.7e float\n", 1.5);
	PRINT("%.7e\n", 7.5);
	PRINT("%.7e\n", 1.0);
	PRINT("%.7e\n", -3.85);
	PRINT("%.7e\n", 573.924);
	PRINT("%.7e\n", -958.125);
	PRINT("%.7e\n", 23.00041);
	PRINT("%.7e\n", 0.0000039);
	PRINT("%.7e\n", -7.00036);
	PRINT("%.7e\n", -0.000032);
	PRINT("%.7e\n", 0.0000001);
	PRINT("%.7e\n", -0.0000001);
	PRINT("%.7e\n", 9873.000001);
	PRINT("%.7e\n", -875.000001);
	PRINT("%.7e\n", 999.9999999);
	PRINT("%.7e\n", -99.9999999);
	PRINT("%.7e\n", 0.999999);
	PRINT("%.7e\n", -0.999999);
	PRINT("%.7e\n", 23.375094499);
	PRINT("%.7e\n", -985.765426499);
	PRINT("%.7e\n", 0.0894255);
	PRINT("%.7e\n", -56.2012685);
	PRINT("%.7e\n", 43.4399999);
	PRINT("%.7e\n", -5.0299999);
	PRINT("%.7e\n", 43.43999949);
	PRINT("%.7e\n", -5.02999949);
	PRINT("%.7e\n", 1.99999949);
	PRINT("%.7e\n", -0.99999949);
	PRINT("%.7e\n", 3.9999999);
	PRINT("this %.8e float\n", 1.5);
	PRINT("%.8e\n", 7.5);
	PRINT("%.8e\n", 1.0);
	PRINT("%.8e\n", -3.85);
	PRINT("%.8e\n", 573.924);
	PRINT("%.8e\n", -958.125);
	PRINT("%.8e\n", 23.00041);
	PRINT("%.8e\n", 0.00000039);
	PRINT("%.8e\n", -7.00036);
	PRINT("%.8e\n", -0.0000032);
	PRINT("%.8e\n", 0.00000001);
	PRINT("%.8e\n", -0.00000001);
	PRINT("%.8e\n", 9873.000001);
	PRINT("%.8e\n", -875.000001);
	PRINT("%.8e\n", 999.9999999);
	PRINT("%.8e\n", -99.99999999);
	PRINT("%.8e\n", 0.999999);
	PRINT("%.8e\n", -0.999999);
	PRINT("%.8e\n", 23.375094499);
	PRINT("%.8e\n", -985.765426499);
	PRINT("%.8e\n", 0.0894255);
	PRINT("%.8e\n", -56.2012685);
	PRINT("%.8e\n", 43.4399999);
	PRINT("%.8e\n", -5.0299999);
	PRINT("%.8e\n", 43.43999949);
	PRINT("%.8e\n", -5.02999949);
	PRINT("%.8e\n", 1.99999949);
	PRINT("%.8e\n", -0.99999949);
	PRINT("%.8e\n", 3.9999999);
	PRINT("this %.9e float\n", 1.5);
	PRINT("%.9e\n", 7.5);
	PRINT("%.9e\n", 1.0);
	PRINT("%.9e\n", -3.85);
	PRINT("%.9e\n", 573.924);
	PRINT("%.9e\n", -958.125);
	PRINT("%.9e\n", 23.00041);
	PRINT("%.9e\n", 0.00000039);
	PRINT("%.9e\n", -7.00036);
	PRINT("%.9e\n", -0.0000032);
	PRINT("%.9e\n", 0.00000001);
	PRINT("%.9e\n", -0.00000001);
	PRINT("%.9e\n", 9873.000001);
	PRINT("%.9e\n", -875.000001);
	PRINT("%.9e\n", 999.99999999);
	PRINT("%.9e\n", -99.99999999);
	PRINT("%.9e\n", 0.999999);
	PRINT("%.9e\n", -0.999999);
	PRINT("%.9e\n", 23.375094499);
	PRINT("%.9e\n", -985.765426499);
	PRINT("%.9e\n", 0.0894255);
	PRINT("%.9e\n", -56.2012685);
	PRINT("%.9e\n", 43.4399999);
	PRINT("%.9e\n", -5.0299999);
	PRINT("%.9e\n", 43.43999949);
	PRINT("%.9e\n", -5.02999949);
	PRINT("%.9e\n", 1.99999949);
	PRINT("%.9e\n", -0.99999949);
	PRINT("%.9e\n", 3.9999999);
	PRINT("this %.10e float\n", 1.5);
	PRINT("%.10e\n", 7.5);
	PRINT("%.10e\n", 1.0);
	PRINT("%.10e\n", -3.85);
	PRINT("%.10e\n", 573.924);
	PRINT("%.10e\n", -958.125);
	PRINT("%.10e\n", 23.8341375094);
	PRINT("%.10e\n", -985.2459765426);
	PRINT("%.10e\n", 23.8341375094499);
	PRINT("%.10e\n", -985.2459765426499);
	PRINT("%.10e\n", 0.87650894255);
	PRINT("%.10e\n", -56.47852012685);
	PRINT("%.10e\n", 23.000000041);
	PRINT("%.10e\n", 0.0000000039);
	PRINT("%.10e\n", -7.000000036);
	PRINT("%.10e\n", -0.000000032);
	PRINT("%.10e\n", 0.0000000001);
	PRINT("%.10e\n", -0.0000000001);
	PRINT("%.10e\n", 9873.0000000001);
	PRINT("%.10e\n", -875.0000000001);
	PRINT("%.10e\n", 999.9999999999);
	PRINT("%.10e\n", -99.9999999999);
	PRINT("%.10e\n", 0.9999999999);
	PRINT("%.10e\n", -0.9999999999);
	PRINT("%.11e\n",        1.025978541236587568);
	PRINT("%.11e\n",        1.025978548534310421);
	PRINT("%.11e\n", 0.000000000010000000);
	PRINT("%.11e\n", 99.999999999990000000);
	PRINT("%.12e\n",        1.025978541236587568);
	PRINT("%.12e\n",        1.025978548534310421);
	PRINT("%.12e\n", 0.000000000001000000);
	PRINT("%.12e\n", 99.999999999999000000);
	PRINT("%.13e\n",        1.025978541136587568);
	PRINT("%.13e\n",        1.025978548534310421);
	PRINT("%.13e\n", 0.000000000000100000);
	PRINT("%.13e\n", 99.999999999999900000);
	PRINT("%.14e\n",        1.025978541436587568);
	PRINT("%.14e\n",        1.025978548534310421);
	PRINT("%.14e\n", 0.000000000000010000);
	PRINT("%.14e\n",  9.999999999999990000);
	PRINT("%.15e\n",        1.025978542436587568);
	PRINT("%.15e\n",        1.025978548534310421);
	PRINT("%.15e\n", 0.000000000000001000);
	PRINT("%.15e\n",  0.999999999999999000);
	PRINT("%.16e\n",        1.025978542436587568);
	PRINT("%.16e\n",        1.025978548534310421);
	PRINT("%.16e\n", 0.000000000000000100);
	PRINT("%.16e\n",  0.999999999999999900);
	PRINT("%.17e\n",        1.025978542436587568);
	PRINT("%.17e\n",        1.025978548534310421);
	PRINT("%.17e\n", 0.000000000000000010);
	PRINT("%.17e\n",  0.999999999999999990);
	PRINT("%.18e\n",        0.125978542436587568);
	PRINT("%.18e\n",        0.125978548534310421);
	PRINT("%#.0e\n", 7.4);
	PRINT("%#.1e\n", 7.3);
	PRINT("%#.0e\n", -7.4);
	PRINT("%#.1e\n", -7.3);
	PRINT("%+.0e\n", 7.4);
	PRINT("%+.3e\n", 7.3);
	PRINT("%+.0e\n", -7.4);
	PRINT("%+.3e\n", -7.3);
	PRINT("%5.0e\n", 7.3);
	PRINT("%5.1e\n", 7.3);
	PRINT("%5.3e\n", 7.3);
	PRINT("%5.6e\n", 7.3);
	PRINT("%5.0e\n", -7.3);
	PRINT("%5.1e\n", -7.3);
	PRINT("%5.3e\n", -7.3);
	PRINT("%5.6e\n", -7.3);
	PRINT("%05.0e\n", 7.3);
	PRINT("%05.1e\n", 7.3);
	PRINT("%05.3e\n", 7.3);
	PRINT("%05.6e\n", 7.3);
	PRINT("%05.0e\n", -7.3);
	PRINT("%05.1e\n", -7.3);
	PRINT("%05.3e\n", -7.3);
	PRINT("%05.6e\n", -7.3);
	PRINT("%-5.0e\n", 7.3);
	PRINT("%-5.1e\n", 7.3);
	PRINT("%-5.3e\n", 7.3);
	PRINT("%-5.6e\n", 7.3);
	PRINT("%-5.0e\n", -7.3);
	PRINT("%-5.1e\n", -7.3);
	PRINT("%-5.3e\n", -7.3);
	PRINT("%-5.6e\n", -7.3);
	PRINT("%-05.0e\n", 7.3);
	PRINT("%-05.1e\n", 7.3);
	PRINT("%-05.3e\n", 7.3);
	PRINT("%-05.6e\n", 7.3);
	PRINT("%-05.0e\n", -7.3);
	PRINT("%-05.1e\n", -7.3);
	PRINT("%-05.3e\n", -7.3);
	PRINT("%-05.6e\n", -7.3);
	PRINT("%0-5.0e\n", 7.3);
	PRINT("%0-5.1e\n", 7.3);
	PRINT("%0-5.3e\n", 7.3);
	PRINT("%0-5.6e\n", 7.3);
	PRINT("%0-5.0e\n", -7.3);
	PRINT("%0-5.1e\n", -7.3);
	PRINT("%0-5.3e\n", -7.3);
	PRINT("%0-5.6e\n", -7.3);
	PRINT("%#-5.0e\n", 7.3);
	PRINT("%#-5.1e\n", 7.3);
	PRINT("%#-5.3e\n", 7.3);
	PRINT("%#-5.6e\n", 7.3);
	PRINT("%#-5.0e\n", -7.3);
	PRINT("%#-5.1e\n", -7.3);
	PRINT("%#-5.3e\n", -7.3);
	PRINT("%#-5.6e\n", -7.3);
	PRINT("%+5.0e\n", 7.3);
	PRINT("%+5.1e\n", 7.3);
	PRINT("%+5.3e\n", 7.3);
	PRINT("%+5.6e\n", 7.3);
	PRINT("%+5.0e\n", -7.3);
	PRINT("%+5.1e\n", -7.3);
	PRINT("%+5.3e\n", -7.3);
	PRINT("%+5.6e\n", -7.3);
	PRINT("%+05.0e\n", 7.3);
	PRINT("%+05.1e\n", 7.3);
	PRINT("%+05.3e\n", 7.3);
	PRINT("%+05.6e\n", 7.3);
	PRINT("%+05.0e\n", -7.3);
	PRINT("%+05.1e\n", -7.3);
	PRINT("%+05.3e\n", -7.3);
	PRINT("%+05.6e\n", -7.3);
	PRINT("%+-5.0e\n", 7.3);
	PRINT("%+-5.1e\n", 7.3);
	PRINT("%+-5.3e\n", 7.3);
	PRINT("%+-5.6e\n", 7.3);
	PRINT("%+-5.0e\n", -7.3);
	PRINT("%+-5.1e\n", -7.3);
	PRINT("%+-5.3e\n", -7.3);
	PRINT("%+-5.6e\n", -7.3);
	PRINT("%+-05.0e\n", 7.3);
	PRINT("%+-05.1e\n", 7.3);
	PRINT("%+-05.3e\n", 7.3);
	PRINT("%+-05.6e\n", 7.3);
	PRINT("%+-05.0e\n", -7.3);
	PRINT("%+-05.1e\n", -7.3);
	PRINT("%+-05.3e\n", -7.3);
	PRINT("%+-05.6e\n", -7.3);
	PRINT("%-+5.0e\n", 7.3);
	PRINT("%-+5.1e\n", 7.3);
	PRINT("%-+5.3e\n", 7.3);
	PRINT("%-+5.6e\n", 7.3);
	PRINT("%-+5.0e\n", -7.3);
	PRINT("%-+5.1e\n", -7.3);
	PRINT("%-+5.3e\n", -7.3);
	PRINT("%-+5.6e\n", -7.3);
	PRINT("%+#-5.0e\n", 7.3);
	PRINT("%+#-5.1e\n", 7.3);
	PRINT("%+#-5.3e\n", 7.3);
	PRINT("%+#-5.6e\n", 7.3);
	PRINT("%+#-5.0e\n", -7.3);
	PRINT("%+#-5.1e\n", -7.3);
	PRINT("%+#-5.3e\n", -7.3);
	PRINT("%+#-5.6e\n", -7.3);
	PRINT("% 5.0e\n", 7.3);
	PRINT("% 5.1e\n", 7.3);
	PRINT("% 5.3e\n", 7.3);
	PRINT("% 5.6e\n", 7.3);
	PRINT("% 5.0e\n", -7.3);
	PRINT("% 5.1e\n", -7.3);
	PRINT("% 5.3e\n", -7.3);
	PRINT("% 5.6e\n", -7.3);
	PRINT("% 05.0e\n", 7.3);
	PRINT("% 05.1e\n", 7.3);
	PRINT("% 05.3e\n", 7.3);
	PRINT("% 05.6e\n", 7.3);
	PRINT("% 05.0e\n", -7.3);
	PRINT("% 05.1e\n", -7.3);
	PRINT("% 05.3e\n", -7.3);
	PRINT("% 05.6e\n", -7.3);
	PRINT("% -5.0e\n", 7.3);
	PRINT("% -5.1e\n", 7.3);
	PRINT("% -5.3e\n", 7.3);
	PRINT("% -5.6e\n", 7.3);
	PRINT("% -5.0e\n", -7.3);
	PRINT("% -5.1e\n", -7.3);
	PRINT("% -5.3e\n", -7.3);
	PRINT("% -5.6e\n", -7.3);
	PRINT("% -05.0e\n", 7.3);
	PRINT("% -05.1e\n", 7.3);
	PRINT("% -05.3e\n", 7.3);
	PRINT("% -05.6e\n", 7.3);
	PRINT("% -05.0e\n", -7.3);
	PRINT("% -05.1e\n", -7.3);
	PRINT("% -05.3e\n", -7.3);
	PRINT("% -05.6e\n", -7.3);
	PRINT("%- 5.0e\n", 7.3);
	PRINT("%- 5.1e\n", 7.3);
	PRINT("%- 5.3e\n", 7.3);
	PRINT("%- 5.6e\n", 7.3);
	PRINT("%- 5.0e\n", -7.3);
	PRINT("%- 5.1e\n", -7.3);
	PRINT("%- 5.3e\n", -7.3);
	PRINT("%- 5.6e\n", -7.3);
	PRINT("% #-5.0e\n", 7.3);
	PRINT("% #-5.1e\n", 7.3);
	PRINT("% #-5.3e\n", 7.3);
	PRINT("% #-5.6e\n", 7.3);
	PRINT("% #-5.0e\n", -7.3);
	PRINT("% #-5.1e\n", -7.3);
	PRINT("% #-5.3e\n", -7.3);
	PRINT("% #-5.6e\n", -7.3);
	PRINT("%+ .0e\n", 7.3);
	PRINT("%+ .1e\n", 7.3);
	PRINT("%+ .3e\n", 7.3);
	PRINT("%+ .6e\n", 7.3);
	PRINT("%+ .0e\n", -7.3);
	PRINT("%+ .1e\n", -7.3);
	PRINT("%+ .3e\n", -7.3);
	PRINT("%+ .6e\n", -7.3);
	PRINT("% +.0e\n", 7.3);
	PRINT("% +.1e\n", 7.3);
	PRINT("% +.3e\n", 7.3);
	PRINT("% +.6e\n", 7.3);
	PRINT("% +.0e\n", -7.3);
	PRINT("% +.1e\n", -7.3);
	PRINT("% +.3e\n", -7.3);
	PRINT("% +.6e\n", -7.3);
	PRINT("%.100e\n", 0.237);
	PRINT("%.32e\n", 0.237);
	PRINT("%.4e\n", 0.237);
	PRINT("%.4e\n", -0.106577568068517810765107851705167);
	PRINT("%.10e\n", 0.0);
	PRINT("%.2000e\n", 623.28376510723481);
	/*PRINT("%.2000e\n", DBL_MIN);
	PRINT("%.2000e\n", -DBL_MIN);
	PRINT("%.0e\n", DBL_MAX);
	PRINT("%.3e\n", DBL_MAX);
	PRINT("%e\n", DBL_MAX);
	PRINT("%.8e\n", DBL_MAX);
	PRINT("%.12e\n", DBL_MAX);
	PRINT("%.16e\n", DBL_MAX);
	PRINT("%.18e\n", DBL_MAX);
	PRINT("%.0e\n", -DBL_MAX);
	PRINT("%.3e\n", -DBL_MAX);
	PRINT("%e\n", -DBL_MAX);
	PRINT("%.8e\n", -DBL_MAX);
	PRINT("%.12e\n", -DBL_MAX);
	PRINT("%.16e\n", -DBL_MAX);
	PRINT("%.18e\n", -DBL_MAX);
	PRINT("%.0e\n", DBL_MIN);
	PRINT("%.3e\n", DBL_MIN);
	PRINT("%e\n", DBL_MIN);
	PRINT("%.8e\n", DBL_MIN);
	PRINT("%.12e\n", DBL_MIN);
	PRINT("%.16e\n", DBL_MIN);
	PRINT("%.18e\n", DBL_MIN);
	PRINT("%.0e\n", -DBL_MIN);
	PRINT("%.3e\n", -DBL_MIN);
	PRINT("%e\n", -DBL_MIN);
	PRINT("%.8e\n", -DBL_MIN);
	PRINT("%.12e\n", -DBL_MIN);
	PRINT("%.16e\n", -DBL_MIN);
	PRINT("%.18e\n", -DBL_MIN);*/
}


