/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 15:10:34 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/19 15:44:54 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int i;
	int *result;

	i = 0;
	if (max <= min)
		return (0);
	size = max - min;
	result = (int *)malloc(sizeof(int) * size);
	while (min + i < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
