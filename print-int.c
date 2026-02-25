/* print-int
 * Copyright (C) 2026 weehs
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include "print-int.h"

int	show_pos(int num)
{
	if (num < 0)
		return (write (1, "-", 1));
	else
		return (write (1, "+", 1));
}

int	tokenize(stack *data, int num)
{
	int	quotient;
	int	remainder;

	quotient = num / 10;
	remainder = num % 10;
	if (num < 0)
	{
		quotient = -quotient;
		remainder = -remainder;
	}
	while (quotient >= 0)
	{
		if (quotient == 0)
		{
			if (push (data, remainder) == -1)
				return (-1);
			return (0);
		}
		if (push (data, remainder) == -1)
			return (-1);
		remainder = quotient % 10;
		quotient = quotient / 10;
	}
	return (0);
}

int	display(stack *data, int num)
{
	int		i;
	char	text;

	i = 0;
	if (show_pos (num) == -1)
		return (-1);
	if (tokenize (data, num) == -1)
		return (-1);
	while (data->size != 1)
	{
		i = pop (data);
		if (int_to_char (i, &text) == -1)
			return (-1);
		if (write (1, &text, 1) == -1)
			return (-1);
	}
	return (0);
}
