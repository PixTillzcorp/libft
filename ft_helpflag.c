#include "libft.h"

int		ft_helpflag(void)
{
	ft_putstr("[+-0 #]					~~> Flags\n");
	ft_putstr("[int]					~~> Field Width\n");
	ft_putstr("[\'.\' followed by an int]		~~> Pre\n");
	ft_putstr("[sScCoOuUxXdDieEp%h]			~~> Convs\n");
	ft_putstr("format : \"%[Flags][Field Width][Precision][Convs]\"");
	return (22 + 26 + 34 + 33 + 50);
}