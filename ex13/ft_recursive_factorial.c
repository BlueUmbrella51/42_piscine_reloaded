/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 09:27:47 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/19 09:33:34 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 12 || nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
