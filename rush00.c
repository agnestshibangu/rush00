#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	go_to_col_print(int x, int count_col, char *toolbox)
{
	if (count_col == 1)
		ft_putchar(toolbox[0]);
	else if (count_col == x)
		ft_putchar(toolbox[2]);
	else
		ft_putchar(toolbox[1]);
}

void	go_to_line(int x, int y, int count_col, int count_lin)
{
	char	toolbox[3];

	if (count_lin == 1)
	{
		toolbox[0] = 'o';
		toolbox[1] = '-';
		toolbox[2] = 'o';
	}
	else if (count_lin == y)
	{
		toolbox[0] = 'o';
		toolbox[1] = '-';
		toolbox[2] = 'o';
	}
	else
	{
		toolbox[0] = '|';
		toolbox[1] = ' ';
		toolbox[2] = '|';
	}
	go_to_col_print(x, count_col, toolbox);
}

void	rush(int x, int y)
{
	int	count_lin;
	int	count_col;

	if (y < 1 || x < 1)
	{
		return ;
	}
	count_lin = 1;
	while (count_lin <= y)
	{
		count_col = 1;
		while (count_col <= x)
		{
			go_to_line(x, y, count_col, count_lin);
			count_col++;
		}
		ft_putchar('\n');
		count_lin++;
	}
}
