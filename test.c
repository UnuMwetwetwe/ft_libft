#include "libft.h'

int	ft_itoi(int n)
{
	char	*s;

	s = ft_itoa(n);
	n = ft_putnbr(s);
	return (n);
}
