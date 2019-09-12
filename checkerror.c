#include "push_swap.h"

char	**fixstr(char **s)
{
	int		i;
	char	**str;

	i = 0;
	str = s;
	while (s[i])
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = 0;
	return (s);
}

int		newlen(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	return (i);
}

void	checkerror(int argc, int i, char **number)
{

    if (i == 0 && argc == 0)
        if (!ft_isint(number[i]) || !ft_isnumber(number[i]))
        {
            ft_putendl_fd("Error", 2);
            exit(0);
        }
	while (i < argc)
	{
		if (!ft_isint(number[i]) || !ft_check_dup(argc, number)
				|| !ft_isnumber(number[i]))
		{
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		i++;
	}
}