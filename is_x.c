int is_x(unsigned int x)
{
	int num;
	return (num);
}

int	ft_putnbrhexa_min(unsigned int nb)
{
	if (nb < 10)
	{
		nb += '0';
		write(1, &nb, 1);
	}
	else if (nb < 17)
	{
		nb -= 10;
		nb += 'a';
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_putnbrhexa_max(unsigned int nb)
{
	if (nb < 10)
	{
		nb += '0';
		write(1, &nb, 1);
	}
	else if (nb < 17)
	{
		nb -= 10;
		nb += 'A';
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}


