#include "ft_printf.h"

int	is_char(int c)
{
	int	num;
	num = 1;
	write (1, &c, 1);
	return (num);
}

int	is_str (char *str)
{
	int num;
	num = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return(num);
}
int	is_ptr (void *ptr)
{
	int num;
	return (num);
	//printar um endereço de memoria ?cmoooo?
}
int	is_dec (int d)
{
	int	num;
	ft_putnbr_fd(d, 1);
	return(num);
}
int	is_int (int i)
{
	int	num;
	ft_putnbr_fd(i, 1);
	return(num);
}

int is_uns (unsigned int u)
{
	int	num;
	ft_putnbr_fd(u, 1);
	return (num);
}

int is_x(unsigned int x)
{
	int num;
	return (num);
}

int is_X(unsigned int X)
{
	int num;
	return (num);
}
