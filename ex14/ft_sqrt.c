/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 09:35:38 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/20 13:25:20 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int check;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb % 2 == 0)
		i = 2;
	else
		i = 3;
	check = i * i;
	while (check < nb)
	{
		i += 2;
		check = i * i;
	}
	if (check == nb)
		return (i);
	return (0);
}
