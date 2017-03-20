#include "libft.h"

void	ft_putnstr(const char *str, const int n)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		if (n <= 0)
			ft_putstr(str);
		else
		{
			while (str[i] && i < n)
				ft_putchar(str[i++]);
		}
	}
}

