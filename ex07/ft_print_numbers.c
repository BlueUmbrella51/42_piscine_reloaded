/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/18 17:33:54 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/18 17:41:20 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(i + '0');
		i++;
	}
}
