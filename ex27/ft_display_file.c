/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   display_file.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 19:39:04 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/20 09:18:04 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	char	c;
	int		fd;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		while (read(fd, &c, 1))
			ft_putchar(c);
		close(fd);
	}
}
