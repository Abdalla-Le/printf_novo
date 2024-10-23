/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:58:43 by lnovis-a          #+#    #+#             */
/*   Updated: 2024/10/23 08:29:24 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// print exemplos
// "frase sem porcentagem"
// "frase com % sem flag"
// "frase com % + flag "

//verify1 = s/ %
//verify2 = c/ % s/ flag

#include "ft_printf.h"

int	is_percent(char c)
{
	if (c == '%')
		return (1);
	else
		return (0);
}
int	ft_printf(const char *s, ...)
{
	int	num;
	int	i;
	va_list args;

	va_start (args, s);
	num = 0;
	if (ft_strchr(s, '%') == 0)
	{
		ft_putstr_fd((char *)s, 1);
		num = ft_strlen(s);
		return (num);
	}
	else
	{
		i = 0;
		while (s[i])
		{
			if (is_percent(s[i]) == 0)
			{
				ft_putchar_fd(s[i], 1);
				i++;
				num++;
			}
			else
			{
				if (is_percent(s[i + 1] == 1))
				{
					i++;
					num++;
					ft_putchar_fd(s[i], 1);
				}
				i++;

				if (is_conversion(s[i + 1])== 1)
				{
					conversion(args, s[i + 1]);
					i++;
				}
			}
		}
		return (i);
	}
}
//ft_printf("aaaaa%caaa%s",H, string)
void conversion(va_list args, int letter)
{
	if (letter == 'c')
		is_char(va_arg(args, int));
	if (letter == 's')
		is_str(va_arg(args,char *));
	if (letter == 'p')
		is_ptr(va_arg(args, void*));
	if (letter == 'd')
		is_dec(va_arg(args, int));
	if (letter == 'i')
		is_int(va_arg(args, int));
	if (letter == 'u')
		is_uns(va_arg(args, unsigned int));
	if (letter == 'x')
		is_x(va_arg(args, unsigned int));
	if (letter == 'X')
		is_X(va_arg(args, unsigned int));
}

int is_conversion(char c)
{
	if (c == 'c' || c == 's')
		return (1);
	if (c == 'i' || c =='d' || c =='u')
		return (1);
	if (c == 'x' || c == 'X')
		return(1);
	else
		return (0);
}






