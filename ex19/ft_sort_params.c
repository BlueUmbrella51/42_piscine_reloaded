/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 10:51:24 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/19 11:49:30 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

void	ft_sort(char **args)
{
	int		i;
	char	*tmp;

	i = 1;
	while (args[i + 1])
	{
		if (ft_strcmp(args[i], args[i + 1]) > 0)
		{
			tmp = args[i];
			args[i] = args[i + 1];
			args[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 2)
		return (0);
	ft_sort(argv);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
}
