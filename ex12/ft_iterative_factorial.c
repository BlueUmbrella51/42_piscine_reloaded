/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 09:17:17 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/20 09:01:15 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = nb;
	result = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (i > 0)
	{
		result *= i;
		i--;
	}
	return (result);
}
