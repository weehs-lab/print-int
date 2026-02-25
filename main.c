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
#include <stdio.h>

int	main(void)
{
	int		x;
	stack	data;

	if (initialization (&data) == -1)
	{
		fprintf (stderr, "Error: Fail to initialize stack data!\n");
		return (-1);
	}
	printf ("Write your number to print: ");
	if (scanf ("%d", &x) != 1)
	{
		fprintf (stderr, "Error: Not a valid number!\n");
		return (-1);
	}
	if (display (&data, x) == -1)
	{
		fprintf (stderr, "Error: Fail to display number!\n");
		return (-1);
	}
	return (0);
}
