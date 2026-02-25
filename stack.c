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

#include "stack.h"

struct	stack
{
	int	mem[12];
	int	size;
};

int	initialization(stack *data)
{
	int		i;

	i = 0;
	if (!data)
		return (-1);
	while (i < 12)
	{
		data->mem[i] = 0;
	}
	data->size = 1;
	return (0);
}

int	push(stack *data, int value)
{
	int	i;

	i = 0;
	if (!data)
		return (-1);
	while (i < 12)
	{
		if (data->size == 12)
		{
			return (-1);
		}
		else
		{
			data->mem[i + 1] = data->mem[i];
		}
	}
	data->mem[0] = value;
	data->size += 1;
	return (0);
}

int	pop(stack *data)
{
	int	i;
	int	val;

	i = 1;
	if (!data)
		return (-1);
	val = data->mem[0];
	while (i < 12)
	{
		data->mem[i - 1] = data->mem[i];
	}
	data->mem[11] = 0;
	data->size -= 1;
	return (val);
}
